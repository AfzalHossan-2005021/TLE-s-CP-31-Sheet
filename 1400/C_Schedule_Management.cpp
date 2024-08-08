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
        ll n, m, tmp, ans = LLONG_MAX;
        cin >> n >> m;
        vector<ll> a(n, 0LL);
        for(int i = 0; i < m; i++){
            cin >> tmp;
            a[tmp - 1LL] += 1LL;
        }
        ll l = 1LL, r = 2LL*m;
        while(l <= r){
            ll mid = (l + r) / 2LL;
            ll rem_own = 0LL, ex_other = 0LL;
            for(int i = 0; i < n; i++){
                if(a[i] >= mid){
                    rem_own += a[i] - mid;
                } else {
                    ex_other += (mid - a[i])/2LL;
                }
            }
            if(rem_own <= ex_other){
                ans = min(ans, mid);
                r = mid - 1LL;
            } else {
                l = mid + 1LL;
            }
        }
        cout << ans << endl;
    }
    return 0;
}