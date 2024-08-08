#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int mod = 1e9+7;

int main(){
    int n, k;
    cin >> n >> k;
    vector<vi> dp(k+1, vi(n+1, 1));
    for(int i = 2; i <= k; i++){
        for(int j = 2; j <= n; j++){
            for(int l = j; l <= n; l += j){
                dp[i][l] = (dp[i][l] + dp[i-1][j]) % mod;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = (ans + dp[k][i]) % mod;
    }
    cout << ans << endl;
    return 0;
}