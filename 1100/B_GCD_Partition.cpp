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
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        ll pref_sum[n+1];
        pref_sum[0] = 0LL;
        for(int i=1; i<=n; i++){
            pref_sum[i] = pref_sum[i-1] + a[i-1];
        }
        ll ans = 1LL;
        for(int i=n-1; i>0; i--){
            ans = max(ans, __gcd(pref_sum[i], pref_sum[n]));
        }
        cout << ans << endl;
    }
    return 0;
}