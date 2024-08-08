#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n, ans = 0LL;
        cin >> n;
        while(n > 0){
            ans += n;
            n /= 2LL;
        }
        cout << ans << endl;
    }
    return 0;
}