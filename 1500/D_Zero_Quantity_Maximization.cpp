#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    vi a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    map<pii, int> mp;
    int both_zero = 0;
    for(int i = 0; i < n; i++){
        if(!a[i] && !b[i]){
            both_zero++;
        } else if(!b[i]) {
            mp[{0 , 0}]++;
        } else if(!a[i]){
            continue;
        } else {
            int gcd = __gcd(a[i], b[i]);
            mp[{a[i]/gcd, b[i]/gcd}]++;
        }
    }
    for(auto p : mp){
        ans = max(ans, p.s);
    }
    cout << ans+both_zero << endl;
    return 0;
}