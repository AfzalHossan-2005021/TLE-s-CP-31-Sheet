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
        vi a(n * k);
        for(int i = 0; i < n * k; i++){
            cin >> a[i];
        }
        int x = (n + 1) / 2;
        x = n - x;
        ll ans = 0;
        for(int i = n * k - x - 1, j = 0; j < k; i -= x + 1, j++){
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}