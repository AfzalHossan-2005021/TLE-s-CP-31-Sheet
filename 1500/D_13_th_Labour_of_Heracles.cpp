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
        vi w(n), vertices(n, 0);
        for(int i = 0; i < n; i++) cin >> w[i];
        for(int i = 1; i < n; i++){
            int u, v;
            cin >> u >> v;
            u--, v--;
            vertices[u]++;
            vertices[v]++;
        }
        vector<pii> non_leaf;
        ll total_weight = 0;
        for(int i = 0; i < n; i++){
            total_weight += w[i];
            if(vertices[i] > 1) non_leaf.push_back({w[i], vertices[i] - 1});
        }
        sort(non_leaf.rbegin(), non_leaf.rend());
        cout << total_weight << " ";
        for(int i = 0; i < non_leaf.size(); i++){
            for(int j = 0; j < non_leaf[i].s; j++){
                total_weight += non_leaf[i].f;
                cout << total_weight << " ";
            }
        }
        cout << endl;
    }
    return 0;
}