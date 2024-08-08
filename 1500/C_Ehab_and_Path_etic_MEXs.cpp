#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    n--;
    map<int, vi> mp;
    for(int i = 0; i < n; i++){
        int u, v;
        cin >> u >> v;
        mp[u].push_back(i);
        mp[v].push_back(i);
    }
    vi ans(n, -1);
    int cnt = 0;
    for(auto p : mp){
        if(p.s.size() > 2){
            for(int i = 0; i < p.s.size(); i++){
                ans[p.s[i]] = cnt++;
            }
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(ans[i] == -1){
            ans[i] = cnt++;
        }
        cout << ans[i] << endl;
    }
    return 0;
}