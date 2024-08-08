#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> b(n+1);
        for(int i = 1; i <= n; i++) cin >> b[i];
        vector<bool> dp(n+1, false); dp[0] = true;
        for(int i = 1; i <= n; i++){
            if(dp[i-1] && i + b[i] <= n) dp[i + b[i]] = true;
            if(i-b[i]-1 >= 0 && dp[i-b[i]-1]) dp[i] = true;
        }
        cout << (dp[n] ? "YES\n" : "NO\n");
    }
    return 0;
}