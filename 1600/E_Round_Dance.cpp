#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

void dfs(int u, int p, int start, bool &cycle, vector<bool> &seen, vector<vi> &adj){
    seen[u] = true;
    for(int v : adj[u]){
        if(v != p){
            if(v == start){
                cycle = true;
                break;
            }
            dfs(v, u, start, cycle, seen, adj);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, neighbour;
        cin >> n;
        vector<vi> adj(n);
        for(int i = 0; i < n; i++){
            cin >> neighbour;
            neighbour--;
            adj[neighbour].push_back(i);
            adj[i].push_back(neighbour);
        }
        vector<bool> seen(n, false);
        int con_comp = 0, cyc_cnt = 0;
        for(int i = 0; i < n; i++){
            if(!seen[i]){
                bool cycle = false;
                dfs(i, -1, i, cycle, seen, adj);
                con_comp++;
                if(cycle) cyc_cnt++;
            }
        }
        int mx = con_comp;
        int mn = cyc_cnt + (con_comp - cyc_cnt > 0);
        cout << mn << " " << mx << endl;
    }
    return 0;
}