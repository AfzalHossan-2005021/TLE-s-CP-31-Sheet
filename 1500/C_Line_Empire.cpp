#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, c = 0;
        ll a, b, ans = 0;
        cin >> n >> a >> b;
        vi v(n);
        for(int &x : v) cin >> x;
        for(int i = 0; i < n; i++){
            ans += b * (v[i] - c);
            if((n-i-1) * b > a){
                ans += a * (v[i] - c);
                c = v[i];
            } 
        }
        cout << ans << endl;
    }
    return 0;
}