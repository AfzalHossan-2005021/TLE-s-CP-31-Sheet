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
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        int half = n / 2;
        int ans = 0;
        for(int i = 0; i < half; i++){
            ans = gcd(ans, abs(a[i] - a[n-i-1]));
        }
        cout << ans << endl;
    }
    return 0;
}