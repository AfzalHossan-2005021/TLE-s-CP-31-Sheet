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
        int n, k;
        cin >> n >> k;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vi sorted_a(n, 1);
        for(int i = n -2; i >= 0; i--){
            if(a[i] < 2 * a[i + 1]){
                sorted_a[i] = sorted_a[i + 1] + 1;
                sorted_a[i+1] = 0;
            }
        }
        ll ans = 0LL;
        for(int i = 0; i < n; i++){
            if(sorted_a[i] > k){
                ans += (ll)(sorted_a[i] - k);
            }
        }
        cout << ans << endl;
    }
    return 0;
}