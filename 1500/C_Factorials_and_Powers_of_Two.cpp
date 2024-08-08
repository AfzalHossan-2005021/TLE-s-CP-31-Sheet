#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

vector<ll> fact(15);

ll cnt_two_pow(ll n){
    if(n < 0) return INT_MAX;
    return __builtin_popcountll(n);
}

ll solve(ll n, ll i, ll sum, ll cnt){
    if(i == 0) return cnt + cnt_two_pow(n-sum);
    return min(solve(n, i-1, sum, cnt), solve(n, i-1, sum + fact[i], cnt+1));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fact[0] = 1;
    for(int i = 1; i < 15; i++){
        fact[i] = fact[i-1] * i;
    }
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << solve(n, 14, 0, 0) << endl;
    }
    return 0;
}