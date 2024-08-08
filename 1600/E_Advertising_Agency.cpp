#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int m = 1e9 + 7;

vector<ll> fact(1001);

ll modInv(ll a){
    ll b = m - 2, res = 1;
    while(b){
        if(b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

ll nCr(ll n, ll r){
    return (fact[n] * modInv(( fact[r] * fact[n-r]) % m)) % m;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fact[0] = 1;
    for(int i = 1; i <= 1000; i++){
        fact[i] = (fact[i-1] * i) % m;
    }
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vi a(n), b;
        for(int &x: a) cin >> x;
        sort(a.begin(), a.end());
        for(int i = 0; i < k; i++){
            b.push_back(a.back());
            a.pop_back();
        }
        reverse(b.begin(), b.end());
        set<int> s;
        for(int i = 0; i < n - k; i++){
            s.insert(a[i]);
        }
        ll ans = 1;
        for(auto x: s){
            int p = upper_bound(a.begin(), a.end(), x) - lower_bound(a.begin(), a.end(), x);
            int q = upper_bound(b.begin(), b.end(), x) - lower_bound(b.begin(), b.end(), x);
            ans = (ans * nCr(p+q, p)) % m;
        }
        cout << ans << endl;
    }
    return 0;
}