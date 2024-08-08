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
        int x, k;
        cin >> x >> k;
        if(x % k == 0){
            cout << 2 << endl;
            cout << 1 << " " << x-1 << endl;
        } else {
            cout << 1 << endl;
            cout << x << endl;
        }
    }
    return 0;
}