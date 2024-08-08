#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int k, mod = 1e9+7;

ll mod_pow(int num){
    ll ans = 1;
    for(int i = 0; i < k; i++){
        ans *= num;
        ans %= mod;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n >> k;
    map<int, vi> adj;
    for(int i = 0; i < n - 1; i++){
        int u, v, x;
        cin >> u >> v >> x;
        if(!x){
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    vector<bool> visited(n, false);
    vi cnt_elem_comp;
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            int cnt = 1;
            queue<int> q;
            visited[i] = true;
            q.push(i);
            while(!q.empty()){
                int u = q.front();
                q.pop();
                for(int v : adj[u]){
                    if(!visited[v]){
                        cnt++;
                        visited[v] = true;
                        q.push(v);
                    }
                }
            }
            cnt_elem_comp.push_back(cnt);
        }
    }
    ll ans = mod_pow(n);
    for(int i = 0; i < cnt_elem_comp.size(); i++){
        ans += mod - mod_pow(cnt_elem_comp[i]);
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}