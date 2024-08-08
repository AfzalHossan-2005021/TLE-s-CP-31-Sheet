#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

void set_subtree_size(vector<vi> &edges, vi &subtree_size, vi &depth, int u, int p){
    subtree_size[u] = 1;
    for(int v : edges[u]){
        if(v == p) continue;
        depth[v] = depth[u] + 1;
        set_subtree_size(edges, subtree_size, depth, v, u);
        subtree_size[u] += subtree_size[v];
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<vi> edges(n);
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        u--, v--;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    vi subtree_size(n), depth(n, 1), diff(n);
    set_subtree_size(edges, subtree_size, depth, 0, -1);
    for(int i = 0; i < n; i++){
        diff[i] = subtree_size[i] - depth[i];
    }
    ll ans = 0;
    nth_element(diff.begin(), diff.begin() + n - k, diff.end(), greater<int>());
    for(int i = 0; i < n - k; i++){
        ans += diff[i];
    }
    cout << ans << endl;
    return 0;
}