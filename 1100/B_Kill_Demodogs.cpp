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
    ll m = 1000000007LL;
    while(t--){
        ll n;
        cin >> n;
        ll a;
        if(n % 3 == 0){
            a = n/3LL;
            a = (a * (n+1LL)) % m;
            a = (a * (2LL*n+1LL)) % m;
        } else if((n+1LL) % 3 == 0){
            a = (n+1LL)/3LL;
            a = (a * n) % m;
            a = (a * (2LL*n+1LL)) % m;
        } else {
            a = (2LL*n+1LL)/3LL;
            a = (a * n) % m;
            a = (a * (n+1LL)) % m;
        }
        ll b = ((n * (n+1LL)) / 2LL) % m;
        ll ans = (2022LL * (m + (a - b) % m)) % m;
        cout << ans << endl;
    }
    return 0;
}