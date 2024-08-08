#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

void dfs(int u, int p, vector<vi> &adj, vector<pii> &range, vector<pair<ll, ll>> &dp){
    if(adj[u].size() == 0) {
        dp[u] = {range[u].f, range[u].s};
        return;
    }
    for(auto v: adj[u]){
        if(v == p) continue;
        dfs(v, u, adj, range, dp);
        dp[u].f += max(dp[v].f + abs(range[u].f - range[v].f), dp[v].s + abs(range[u].f - range[v].s));
        dp[u].s += max(dp[v].f + abs(range[u].s - range[v].f), dp[v].s + abs(range[u].s - range[v].s));
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pii> range(n+1);
        for(int i = 1; i <= n; i++){
            cin >> range[i].f >> range[i].s;
        }
        vector<vi> adj(n+1);
        for(int i = 0; i < n-1; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<pair<ll, ll>> dp(n+1, {0, 0});
        dfs(1, 0, adj, range, dp);
        cout << max(dp[1].f, dp[1].s) << endl;
    }
    return 0;
}