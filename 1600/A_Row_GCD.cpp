#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<long long>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vll a(n), b(m);
    for(ll &x: a) cin >> x;
    for(ll &x: b) cin >> x;
    ll g = 0;
    for(int i = 1; i < n; i++){
        g = __gcd(g, abs(a[i] - a[0]));
    }
    for(int i = 0; i < m; i++){
        cout << __gcd(g, a[0] + b[i]) << " ";
    }
    cout << endl;
    return 0;
}