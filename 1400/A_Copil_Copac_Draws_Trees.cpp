#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pii> edges(n-1);
        vector<vi> adj(n);
        for(int i = 0; i < n - 1; i++){
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i] = {u, v};
        }
        vi parent(n, -1);
        queue<int> q;
        vector<bool> visited(n, false);
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int v : adj[u]){
                if(!visited[v]){
                    parent[v] = u;
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
        set<int>seen;
        seen.insert(0);
        vi add_level(n, 0);
        for(int i = 0; i < n-1; i++){
            if(parent[edges[i].s] == edges[i].f){
                if(seen.find(edges[i].f) == seen.end()) add_level[edges[i].s] = 1;
                seen.insert(edges[i].s);
            } else if(parent[edges[i].f] == edges[i].s){
                if(seen.find(edges[i].s) == seen.end()) add_level[edges[i].f] = 1;
                seen.insert(edges[i].f);
            }
        }
        int ans = 1;
        vi level(n, 1);
        visited.clear();
        visited.resize(n, false);
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int v : adj[u]){
                if(!visited[v]){
                    level[v] = level[u] + add_level[v];
                    visited[v] = true;
                    q.push(v);
                    ans = max(ans, level[v]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}