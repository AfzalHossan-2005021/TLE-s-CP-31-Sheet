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
        vi a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int mx = 0;
        for(int i = 0; i < n; i++){
            mx = max(mx, b[i]);
            b[i] = mx;
        }
        if(k > 1){
            vi sum_additional(n, 0);
            int mx_indx = min(n, k);
            for(int i = 0; i < mx_indx; i++){
                sum_additional[i] = b[i] * (k - i - 1);
            }
            vi sum_prefix(n);
            sum_prefix[0] = a[0];
            for(int i = 1; i < n; i++){
                sum_prefix[i] = sum_prefix[i - 1] + a[i];
            }
            int ans = 0;
            for(int i = 0; i < mx_indx; i++){
                ans = max(ans, sum_prefix[i] + sum_additional[i]);
            }
            cout << ans << endl;
        } else {
            cout << a[0] << endl;
        }

    }
    return 0;
}