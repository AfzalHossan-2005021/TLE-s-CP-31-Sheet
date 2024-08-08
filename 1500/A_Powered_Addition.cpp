#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, tmp, mx_diff = 0;
        cin >> n;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp < mx) {
                mx_diff = max(mx_diff, mx - tmp);
            } else {
                mx = tmp;
            }
        }
        if(mx_diff == 0){
            cout << 0 << endl;
        } else {
            cout << (int)log2(mx_diff) + 1 << endl;
        }
    }
    return 0;
}