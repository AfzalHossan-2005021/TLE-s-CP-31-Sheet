#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

const int mod = 998244353;

ll binExp(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1){
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, c;
    ll ans = 1, fact = 1;
    cin >> n;
    n /= 3;
    int half = (n >> 1), dec_mod = mod - 2;
    for(int i = 2; i <= half; i++){
        fact = (fact * i) % mod;
    }
    ans = binExp(fact, dec_mod);
    for(int i = n; i > half; i--){
        ans = (ans * i) % mod;
    }
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(a == b && b == c) {
            ans = (ans * 3) % mod;
            continue;
        }
        if(a < b) swap(a, b);
        if(a < c) swap(a, c);
        if(b == c){
            ans = (ans * 2) % mod;
        }
    }
    cout << ans << endl;
    return 0;
}