#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vi d(1001, INT_MAX);
    d[1] = 0;
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= i; j++){
            int p = i + i/j;
            if(p <= 1000) d[p] = min(d[p], d[i] + 1);
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n, k, ans = 0;
        cin >> n >> k;
        k = min(k, 12*n);
        vi b(n), c(n);
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        vector<int> dp(k + 1, 0);
        for (int i = 0; i < n; ++i) {
          for (int j = k - d[b[i]]; j >= 0; j--) {
            dp[j + d[b[i]]] = max(dp[j + d[b[i]]], dp[j] + c[i]);
          }
        }
        cout << *max_element(dp.begin(), dp.end()) << '\n';
    }
    return 0;
}