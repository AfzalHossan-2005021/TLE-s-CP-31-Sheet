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
        int n;
        cin >> n;
        ll tmp, gcd1 = 0LL, gcd2 = 0LL;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i%2 == 0){
                gcd1 = __gcd(gcd1, a[i]);
            } else {
                gcd2 = __gcd(gcd2, a[i]);
            }
        }
        bool flag1 = false, flag2 = false;
        for(int i = 0; i < n - 1; i++){
            if(a[i] % gcd1 == 0 && a[i+1] % gcd1 == 0){
                flag1 = true;
            }
            if(a[i] % gcd2 == 0 && a[i+1] % gcd2 == 0){
                flag2 = true;
            }
        }
        if(flag1 && flag2){
            cout << 0 << endl;
        } else if(flag1){
            cout << gcd2 << endl;
        } else if(flag2){
            cout << gcd1 << endl;
        } else {
            cout << max(gcd1, gcd2) << endl;
        }
    }
    return 0;
}