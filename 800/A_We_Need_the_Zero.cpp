#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, ex_or, tmp;
        cin >> n >> ex_or;
        for(int i = 1; i < n; i++){
            cin >> tmp;
            ex_or ^= tmp;
        }
        if(ex_or == 0){
            cout << 0 << endl;
        } else if(n & 1){
            cout << ex_or << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}