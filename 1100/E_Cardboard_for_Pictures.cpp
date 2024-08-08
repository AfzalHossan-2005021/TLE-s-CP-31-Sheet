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
        ll n, c, tmp;
        cin >> n >> c;
        ll sqr_sum = 0LL, sum = 0LL;
        for(ll i = 0LL; i < n; i++){
            cin >> tmp;
            sqr_sum += tmp * tmp;
            sum += tmp;
        }
        sqr_sum = c - sqr_sum;
        sum *= 2LL;
        ll r = sqrt(sqr_sum);
        ll l = 2;
        while(l <= r){
            ll m = l + (r - l) / 2;
            ll x = (n * m + sum);
            if(m > LLONG_MAX / x){
                r = m - 1;
                continue;
            }
            x *= m;
            if(x > sqr_sum){
                r = m - 1;
            } else if(x < sqr_sum) {
                l = m + 1;
            } else {
                cout << m/2LL << endl;
                break;
            }
        }
    }
    return 0;
}