#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<ll> a(n, 1);
        ll ans = 1;
        for(int i = 1; i < k; i++){
            ll tmp, sum = 0;
            if((i & 1)){
                for(int j = n-1; j >= 0; j--){
                    tmp = a[j];
                    a[j] = sum;
                    sum = (sum + tmp) % MOD;
                    ans = (ans + tmp) % MOD;                    
                }
            } else {
                for(int j = 0; j < n; j++){
                    tmp = a[j];
                    a[j] = sum;
                    sum = (sum + tmp) % MOD;
                    ans = (ans + tmp) % MOD;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}