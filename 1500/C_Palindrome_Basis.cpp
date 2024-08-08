#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int N = 4e4;
int M = 1e9+7;

vi pallindromes;
vector<vi> dp;

void generate_pallindromes(){
    for(int i = 1; i <= N; i++){
        string s = to_string(i);
        bool isPallindrome = equal(s.begin(), s.end(), s.rbegin());
        if(isPallindrome) pallindromes.push_back(i);
    }
    sort(pallindromes.begin(), pallindromes.end());
}

void count_way(){
    for(int i = 1; i <= N; i++){
        dp[0][i] = 0;
    }
    dp[0][0] = 1;
    for(int i = 1; i <= pallindromes.size(); i++){
        for(int j = 0; j <= N; j++){
            dp[i][j] = dp[i-1][j];
            if(j >= pallindromes[i-1]){
                dp[i][j] += dp[i][j-pallindromes[i-1]];
            }
            dp[i][j] %= M;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    generate_pallindromes();
    dp.resize(pallindromes.size()+1, vi(N+1));
    count_way();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << dp[pallindromes.size()][n] << endl;
    }
    return 0;
}