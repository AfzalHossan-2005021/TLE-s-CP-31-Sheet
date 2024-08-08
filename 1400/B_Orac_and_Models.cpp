#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
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
        vi a(n+1), dp(n+1, 1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 2; i <= n; i++){
            for(int j = 1; j*j <= i; j++){
                if(i % j == 0){
                    if(a[i] > a[j]){
                        dp[i] = max(dp[i], dp[j] + 1);
                    }
                    if(a[i] > a[i/j]){
                        dp[i] = max(dp[i], dp[i/j] + 1);
                    }
                }
            }
        }
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}