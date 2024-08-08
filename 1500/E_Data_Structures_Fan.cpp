#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for(int &x : a) cin >> x;
        string s;
        cin >> s;
        int zeros = 0, ones = 0;
        vi all(n+1);
        all[0] = 0;
        for(int i = 0; i < n; i++){
            all[i+1] = (all[i] ^ a[i]);
            if(s[i] == '0') zeros ^= a[i];
            else ones ^= a[i];
        }
        int q;
        cin >> q;
        while(q--){
            int type;
            cin >> type;
            if(type == 1){
                int l, r;
                cin >> l >> r;
                int range_xor = (all[r] ^ all[l-1]);
                zeros ^= range_xor;
                ones ^= range_xor;
            } else {
                int g;
                cin >> g;
                if(g) cout << ones << " ";
                else cout << zeros << " ";
            }
        }
        cout << endl;
    }
    return 0;
}