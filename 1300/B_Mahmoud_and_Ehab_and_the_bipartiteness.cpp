#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<vi> adj(n);
    for(int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vi color(n, 0);
    queue<int> q;
    q.push(0);
    color[0] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(color[v] == 0){
                color[v] -= color[u];
                q.push(v);
            }
        }
    }
    ll white = 0LL, black = 0LL;
    for(int i = 0; i < n; i++){
        if(color[i] == 1) white++;
        else black++;
    }
    cout << white * black - (ll)(n-1) << endl;
    return 0;
}