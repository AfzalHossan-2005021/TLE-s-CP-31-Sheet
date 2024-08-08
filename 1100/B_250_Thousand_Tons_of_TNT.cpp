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
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll mn = *min_element(a, a + n);
        ll mx = *max_element(a, a + n);
        if(n == 1LL || mn == mx){
            cout << 0 << endl;
        } else if (n == 2LL || n == 3LL){
            cout << mx - mn << endl;
        } else {
            ll prefix_sum[n+1];
            prefix_sum[0] = 0LL;
            for(ll i = 1LL; i <= n; i++){
                prefix_sum[i] = prefix_sum[i-1LL] + a[i-1LL];
            }
            ll ans = LLONG_MIN;
            for(ll i = 1; i * i <= n; i++){
                if(n % i == 0){
                    ll mn_sum = LLONG_MAX, mx_sum = LLONG_MIN;
                    ll len = n / i;
                    for(ll j = 1; j + len <= n+1; j += len){
                        ll sum = prefix_sum[j + len - 1] - prefix_sum[j-1];
                        mn_sum = min(mn_sum, sum);
                        mx_sum = max(mx_sum, sum);
                    }
                    ans = max(ans, mx_sum - mn_sum);
                    mn_sum = LLONG_MAX;
                    mx_sum = LLONG_MIN;
                    len = i;
                    for(ll j = 1; j + len <= n+1; j += len){
                        ll sum = prefix_sum[j + len - 1] - prefix_sum[j-1];
                        mn_sum = min(mn_sum, sum);
                        mx_sum = max(mx_sum, sum);
                    }
                    ans = max(ans, mx_sum - mn_sum);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}