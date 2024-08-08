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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for(ll i = 0LL; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> pref_sum(n+1);
        pref_sum[0] = 0LL;
        for(ll i = 1LL; i <= n; i++){
            pref_sum[i] = pref_sum[i-1] + a[i-1];
        }
        ll ans = 0LL;
        for(ll i = 0LL; i < n; i++){
            ll budget = x - pref_sum[i];
            if(budget < a[i]) break;
            ans += 1LL + (budget-a[i])/(i+1LL);
        }
        cout << ans << endl;
    }
    return 0;
}