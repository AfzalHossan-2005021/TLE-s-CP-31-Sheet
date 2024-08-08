#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m, q;
        cin >> n >> m;
        vector<pii> seg(m);
        for(auto &x : seg) cin >> x.f >> x.s;
        cin >> q;
        vi op(q);
        for(int &x : op) cin >> x;
        int lb = 0, ub = q-1, ans = INT_MAX;
        while(lb <= ub){
            int md = (lb+ub)/2;
            vi ones(n+1, 0);
            bool ok = false;
            for(int i = 0; i <= md; i++){
                ones[op[i]] = 1;
            }
            for(int i = 1; i <= n; i++){
                ones[i] += ones[i-1];
            }
            for(int i = 0; i < m; i++){
                int one_cnt = ones[seg[i].s] - ones[seg[i].f-1];
                int zero_cnt = seg[i].s - seg[i].f - one_cnt + 1;
                if(one_cnt > zero_cnt){
                    ok = true;
                    break;
                }
            }
            if(ok){
                ans = min(ans, md+1);
                ub = md - 1;
            } else {
                lb = md + 1;
            }
        }
        if(ans == INT_MAX){
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}