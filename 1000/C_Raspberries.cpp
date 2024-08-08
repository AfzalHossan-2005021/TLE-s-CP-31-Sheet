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
        int n, k, ans = INT_MAX;
        cin >> n >> k;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            int rem = a[i] % k;
            if(rem != 0) rem = k - rem;
            ans = min(ans, rem);
        }
        if(k == 4 && ans > 0){
            for(int i = 0; i < n; i++){
                a[i] = a[i] % 2;
            }
            int zero = 0, one = 0;
            for(int i = 0; i < n; i++){
                if(a[i] == 0) zero++;
                else one++;
            }
            if(zero >= 2){
                ans = 0;
            } else if(zero == 1){
                ans = 1;
            } else {
                ans = min(ans, 2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}