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
        int n, x;
        cin >> n >> x;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = 0;
        int low = a[0] - x, high = a[0] + x;
        for(int i = 1; i < n; i++){
            int l = a[i] - x, h = a[i] + x;
            int next_l = max(low, l);
            int next_h = min(high, h);
            if(next_l > next_h){
                ans++;
                low = l;
                high = h;
            } else {
                low = next_l;
                high = next_h;
            }
        }
        cout << ans << endl;
    }
    return 0;
}