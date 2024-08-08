#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x_diff = c - a;
        ll y_diff = d - b;
        if(d < b || x_diff > y_diff) cout << -1 << endl;
        else cout << 2*y_diff-x_diff << endl;
    }
    return 0;
}