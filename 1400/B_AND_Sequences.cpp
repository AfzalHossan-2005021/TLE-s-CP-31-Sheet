#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n, equ_all_and = 0;
        int all_and = -1;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            all_and &= a[i];
        }
        for(int i = 0; i < n; i++){
            if(a[i] == all_and){
                equ_all_and++;
            }
        }
        if(equ_all_and < 2LL){
            cout << 0 << endl;
        }else{
            ll ans = equ_all_and * (equ_all_and - 1LL);
            ans %= mod;
            for(ll i = 1LL; i < n - 1LL; i++){
                ans *= i;
                ans %= mod;
            }
            cout << ans << endl;
        }
    }
    return 0;
}