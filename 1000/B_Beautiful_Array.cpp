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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        if(s > b * k + n * (k - 1) || s < b * k){
            cout << -1 << endl;
        } else {
            vector<ll> ans(n, 0LL);
            ans[n-1] = b * k;
            ll rem = s - b * k;
            ll inc = rem / n;
            rem = rem % n;
            for(int i = 0; i < n; i++){
                ans[i] += inc;
                if(rem > 0){
                    ans[i]++;
                    rem--;
                }
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}