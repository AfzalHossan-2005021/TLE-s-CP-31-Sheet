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
        vi diff(n);
        for(int i = 0; i < n; i++){
            cin >> diff[i];
            diff[i] -= i + 1;
        }
        sort(diff.begin(), diff.end());
        ll ans = 0LL;
        for(int i = 0; i < n; i++){
            ans += (ll)(upper_bound(diff.begin(), diff.end(), diff[i]) - lower_bound(diff.begin(), diff.end(), diff[i]) -1);
        }
        cout << ans/2LL << endl;
    }
    return 0;
}