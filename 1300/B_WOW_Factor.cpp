#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    vector<ll> o_count(n, 0LL), v_count(n, 0LL);
    for(int i = 0; i < n; i++){
        if(i == 0 || s[i] != s[i-1]){
            if(s[i] == 'v') v_count[i] = 1LL;
            else o_count[i] = 1LL;
        } else {
            if(s[i] == 'v'){
                v_count[i] = v_count[i-1] + 1LL;
                v_count[i-1] = 0LL;
            } else {
                o_count[i] = o_count[i-1] + 1LL;
                o_count[i-1] = 0LL;
            } 
        }
    }
    ll ans = 0LL;
    vector<ll> prefix_w(n);
    prefix_w[0] = 0LL;
    for(int i = 1; i < n; i++){
        if(v_count[i] > 1){
            prefix_w[i] = prefix_w[i-1] + v_count[i] - 1LL;
        } else {
            prefix_w[i] = prefix_w[i-1];
        }
    }
    for(int i = 0; i < n; i++){
        if(o_count[i] > 0){
            ans += prefix_w[i] * o_count[i] * (prefix_w[n-1]-prefix_w[i]);
        }
    }
    cout << ans << endl;
    return 0;
}