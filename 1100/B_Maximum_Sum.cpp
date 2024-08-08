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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll i = 0L; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> pref(n+1);
        pref[0] = 0L;
        for(ll i = 1L; i <= n; i++){
            pref[i] = pref[i-1] + a[i-1];
        }
        ll ans = 0LL;
        for(int i = 0; i <= k; i++){
            ans = max(ans, pref[n-i] - pref[2*(k-i)]);
        }
        cout << ans << endl;
    }
    return 0;
}