#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define endl "\n"

int MAX = 1e9, MIN = -1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n, mn = MAX, mx = MIN, mn_x = MAX, mx_x = MIN;
        cin >> n;
        vector<ll> x(n), t(n);
        for(ll &i : x) cin >> i;
        for(ll &i : t) cin >> i;
        for(ll i = 0; i < n; i++){
            mn = min(mn, x[i] - t[i]);
            mx = max(mx, x[i] + t[i]);
            mn_x = min(mn_x, x[i]);
            mx_x = max(mx_x, x[i]);
        }
        double ans = (mn + mx) / 2.0;
        if(ans > mx_x) ans = mx_x;
        if(ans < mn_x) ans = mn_x;
        cout << ans << endl;
    }
    return 0;
}