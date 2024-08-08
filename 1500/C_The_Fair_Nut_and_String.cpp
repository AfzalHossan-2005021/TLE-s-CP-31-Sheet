#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    s.push_back('b');
    vi consq_a;
    int cnt = 0, mod = 1e9+7;
    ll ans = 1;
    for(char c : s){
        if(c == 'a'){
            cnt++;
        } else if(c == 'b'){
            if(cnt) consq_a.push_back(cnt);
            cnt = 0;
        }
    }
    for(int x : consq_a){
        ans *= x+1;
        ans %= mod;
    }
    ans--;
    cout << (ans+mod)%mod << endl;
    return 0;
}