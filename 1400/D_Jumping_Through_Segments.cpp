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
        vector<pii> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].f >> a[i].s;
        }
        int l = 0, r = 1e9, ans = INT_MAX;
        while(l <= r){
            int mid = l + (r - l) / 2;
            int lower = 0, upper = 0;
            bool flag = true;
            for(int i = 0; i < n; i++){
                lower -= mid;
                upper += mid;
                if(a[i].s < lower || a[i].f > upper){
                    l = mid + 1;
                    flag = false;
                    break;
                } else {
                    lower = max(lower, a[i].f);
                    upper = min(upper, a[i].s);
                }
            }
            if(flag){
                ans = min(ans, mid);
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}