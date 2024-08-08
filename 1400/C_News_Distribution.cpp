#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k, tmp;
    cin >> n >> m;
    map<int, vi> adj;
    for(int i = 0; i < m; i++){
        cin >> k;
        if(k > 0){
            cin >> tmp;
            int prev = tmp;
            for(int j = 1; j < k; j++){
                cin >> tmp;
                adj[prev].push_back(tmp);
                adj[tmp].push_back(prev);
                prev = tmp;
            }
        }
    }
    int grp = 0;
    vi vis(n+1, -1);
    for(int i = 1; i <= n; i++){
        if(vis[i] == -1){
            queue<int> q;
            q.push(i);
            vis[i] = grp;
            while(!q.empty()){
                int u = q.front();
                q.pop();
                for(auto &v : adj[u]){
                    if(vis[v] == -1){
                        vis[v] = grp;
                        q.push(v);
                    }
                }
            }
            grp++;
        }
    }
    map<int, int> cnt;
    for(int i = 1; i <= n; i++){
        cnt[vis[i]]++;
    }
    for(int i = 1; i <= n; i++){
        cout << cnt[vis[i]] << " ";
    }
    cout << endl;
    return 0;
}