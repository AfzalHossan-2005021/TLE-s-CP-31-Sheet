#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

ll mod = 998244353LL;

vector<ll> mod_fact_dp(2e5 + 1, -1LL);

ll mod_fact(int n){
    if(n == 0 || n == 1){
        return 1LL;
    }
    if(mod_fact_dp[n] == -1){
        mod_fact_dp[n] = ((ll)n * mod_fact(n - 1)) % mod;
    }
    return mod_fact_dp[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        vector<ll> consq(n, 1LL);
        for(int i = 1; i < n; i++){
            if(s[i] == s[i - 1]){
                consq[i] = consq[i - 1] + 1LL;
                consq[i - 1] = 1LL;
            }
        }
        ll op_count = 0LL;
        ll total_consq = 1LL;
        for(int i = 0; i < n; i++){
            if(consq[i] > 1LL){
                op_count += consq[i] - 1LL;
                total_consq = (total_consq * consq[i]) % mod;
            }
        }
        total_consq = (total_consq * mod_fact(op_count)) % mod;
        cout << op_count << " " << total_consq << endl;
    }
    return 0;
}