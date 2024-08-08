#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vi> adj(n);
        for(int i = 0; i < n; i++){
            int u, v;
            cin >> u >> v;
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vi color(n, -1);
        bool possible = true;
        for(int i = 0; i < n; i++){
            if(adj[i].size() > 2) possible = false;
            if(!possible) break;
            if(color[i] == -1){
                queue<int> q;
                q.push(i);
                color[i] = 0;
                while(!q.empty()){
                    int u = q.front();
                    q.pop();
                    for(int v : adj[u]){
                        if(color[v] == -1){
                            color[v] = color[u] ^ 1;
                            q.push(v);
                        } else if(color[v] == color[u]){
                            possible = false;
                        }
                    }
                }
            }
        }
        if(possible){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}