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
        int n, q;
        ll k;
        cin >> n >> k >> q;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<ll> dp(n+1, 0LL);
        for(int i = 1; i <= n; i++){
            if(a[i-1] <= q){
                dp[i] = dp[i-1] + 1LL;
            }
        }
        ll ans = 0;
        for(int i = 0; i <= n; i++){
            if(dp[i] >= k){
                ans += dp[i] - k + 1LL;
            }
        }
        cout << ans << endl;
    }
    return 0;
}