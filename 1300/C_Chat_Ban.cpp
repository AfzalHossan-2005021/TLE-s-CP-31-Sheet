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
        ll k, x;
        cin >> k >> x;
        ll mid_sum = (k * (k + 1)) / 2;
        if(mid_sum > x){
            ll l = 0, r = k;
            while(l < r){
                if(l == r - 1){
                    break;
                }
                ll mid = l + (r-l)/2;
                ll sum_upto_mid = (mid * (mid + 1)) / 2;
                if(sum_upto_mid > x) r = mid;
                else if(sum_upto_mid < x) l = mid;
                else {
                    l = mid - 1;
                    break;
                }
            }
            cout << l+1 << endl;
        } else if(mid_sum < x){
            mid_sum = x - mid_sum;
            ll l = 0, r = k;
            while(l < r){
                if(l == r - 1){
                    break;
                }
                ll mid = l + (r-l)/2;
                ll sum_upto_mid = (mid * (2 * k - mid - 1)) / 2;
                if(sum_upto_mid > mid_sum) r = mid;
                else if(sum_upto_mid < mid_sum) l = mid;
                else {
                    l = mid - 1;
                    break;
                }
            }
            if(k + l + 1 > 2 * k - 1) cout << 2 * k - 1 << endl;
            else cout << k + l + 1 << endl;
        } else {
            cout << k << endl;
        }
    }
    return 0;
}