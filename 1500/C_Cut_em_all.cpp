#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

map<int, vi> adj;
vi sub_tree_size;

int dfs(int u, int p){
    sub_tree_size[u] = 1;
    for(int v : adj[u]){
        if(v == p) continue;
        sub_tree_size[u] += dfs(v, u);
    }
    return sub_tree_size[u];
}


int main(){
    int n, u, v;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(n & 1) {
        cout << -1 << endl;
        return 0;
    }
    int ans = 0;
    sub_tree_size.resize(n, 0);
    dfs(0, -1);
    for(int &x : sub_tree_size){
        ans += ((x+1)&1);
    }
    cout << ans-1 << endl;
    return 0;
}