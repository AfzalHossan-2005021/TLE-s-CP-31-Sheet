#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vi a(n);
        for(int &x : a) cin >> x;
        int lb = *max_element(a.begin(), a.end());
        int ub = lb + n, ans = lb;
        while(lb <= ub){
            int md = (lb + ub) / 2;
            bool any_ok = false;
            for(int i = 0; i < n; i++){
                int trgt = md;
                int rem_k = k;
                bool ok = true;
                for(int j = i; j < n; j++){
                    if(a[j] >= trgt) break;
                    rem_k -= trgt - a[j];
                    if(rem_k < 0 || (j == n-1 && a[j] < trgt)){
                        ok = false;
                        break;
                    }
                    trgt--;
                }
                if(ok){
                    any_ok = true;
                    break;
                }
            }
            if(any_ok){
                ans = max(ans, md);
                lb = md + 1;
            } else {
                ub = md - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}