#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m, u, v;
        cin >> n >> m;
        vi pref_non_friend(n+1, 0);
        for(int i = 0; i < m; i++){
            cin >> u >> v;
            if(v > u) swap(u, v);
            pref_non_friend[u] = max(pref_non_friend[u], v);            
        }
        ll ans = 0LL;
        int last = 0;
        for(int i = 1; i <= n; i++){
            if(pref_non_friend[i] > last){
                last = pref_non_friend[i];
            }
            ans += (ll)(i - last);
        }
        cout << ans << endl;
    }
    return 0;
}