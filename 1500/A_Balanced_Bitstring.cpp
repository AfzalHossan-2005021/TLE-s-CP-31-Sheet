#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;
        bool balanced = true;
        for(int i = k; i < n; i++){
            if(s[i-k] == '?') continue;
            if(s[i] == '?') s[i] = s[i-k];
            else if(s[i] != s[i-k]){
                balanced = false;
                break;
            }
        }
        int z = 0, o = 0, q = 0;
        for(int i = 1; i <= k; i++){
            z += (s[n-i] == '0');
            o += (s[n-i] == '1');
            q += (s[n-i] == '?');
        }
        if(z > k/2 || o > k/2) balanced = false;
        if(balanced){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}