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
        int n, m;
        cin >> n >> m;
        vector<vi>a(m, vi(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[j][i];
            }
        }
        ll ans = 0LL;
        for(int i = 0; i < m; i++){
            sort(a[i].begin(), a[i].end());
            for(int j = 1; j < n; j++){
                ans += (ll)(a[i][j] - a[i][j - 1]) * (ll)(j) * (ll)(n - j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}