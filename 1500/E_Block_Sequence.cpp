#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for(int &x : a){
            cin >> x;
        }
        vi dp(n + 1);
        for(int i = 0; i <= n; i++){
            dp[i] = i;
        }
        for(int i = 0; i < n; i++){
            if(a[i] + i < n) {
                dp[a[i]+i+1] = min(dp[i], dp[a[i]+i+1]);
            }
            dp[i+1] = min(dp[i+1], dp[i]+1);
        }
        cout << dp[n] << endl;
    }
    return 0;
}