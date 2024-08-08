#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n, ans = 0;
        cin >> n;
        ll lb = 0, ub = 1500, level = 0;
        while(lb <= ub){
            ll md = (lb+ub)/2;
            ll sum = (md * (md + 1)) / 2;
            if(sum >= n){
                ub = md - 1;
            } else {
                level = max(level, md + 1);
                lb = md + 1;
            }
        }
        ll prev_lst = ((level-1)*level)/2, lvl_lst = (level*(level+1)/2);
        ll left_gap = n - prev_lst, right_gap = lvl_lst - n;
        while(level){
            ll start = prev_lst + left_gap, stop = lvl_lst - right_gap;
            for(ll i = start; i <= stop; i++){
                ans += i * i;
            }
            if(left_gap > 1) left_gap--;
            if(right_gap > 0) right_gap --;
            level--;
            prev_lst = ((level-1)*level)/2;
            lvl_lst = (level*(level+1)/2);
        }
        cout << ans << endl;
    }
    return 0;
}