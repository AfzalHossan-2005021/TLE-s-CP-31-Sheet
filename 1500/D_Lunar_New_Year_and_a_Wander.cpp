#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<int, vi> adj;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vi ans;
    priority_queue<int, vi, greater<int>> pq;
    vector<bool> vis(n+1, false);
    pq.push(1);
    vis[1] = true;
    while(!pq.empty()){
        int u = pq.top();
        pq.pop();
        ans.push_back(u);
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = true;
                pq.push(v);
            }
        }
    }
    for(int x : ans) cout << x << " "; cout << endl;
    return 0;
}