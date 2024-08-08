#include<bits/stdc++.h>

using namespace std;

#define vll vector<long long>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vll> dp(2, vll(n+1));
    dp[0][0] = 0;
    dp[1][0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> dp[0][i];
    }
    for(int i = 1; i <= n; i++){
        cin >> dp[1][i];
    }
    for(int i = 2; i <= n; i++){
        dp[0][i] += max(dp[1][i-1], dp[1][i-2]);
        dp[1][i] += max(dp[0][i-1], dp[0][i-2]);
    }
    cout << max(dp[0][n], dp[1][n]) << endl;
    return 0;
}

/*
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vi> dp(2, vi(n));

    for(int i = 0; i < n; i++){
        cin >> dp[0][i];
    }
    for(int i = 0; i < n; i++){
        cin >> dp[1][i];
    }
    ll mx_0 = 0, mx_1 = 0;
    for(int i = 0; i < n; i++){
        ll prev_mx_0 = mx_0, prev_mx_1 = mx_1;
        mx_0 = max(prev_mx_0, prev_mx_1 + dp[0][i]);
        mx_1 = max(prev_mx_1, prev_mx_0 + dp[1][i]);
    }
    cout << max(mx_0, mx_1) << endl;
    return 0;
}
*/