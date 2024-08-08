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
    int t, q, a, b;
    string s;
    cin >> t >> s >> q;
    int p = 0, n = 0;
    for(char c : s){
        if(c == '+') p++;
        else n++;
    }
    int diff = abs(p-n);
    while(q--){
        cin >> a >> b;
        if(a < b) swap(a, b);
        ll l = 0, r = (t-diff)/2;
        bool ok = false;
        while(l <= r){
            ll m = (l+r)/2;
            ll p1 = m * a, n1 = (m+diff) * b;
            if(p1 > n1) r = m-1;
            else if(p1 < n1) l = m+1;
            else{
                ok = true;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}