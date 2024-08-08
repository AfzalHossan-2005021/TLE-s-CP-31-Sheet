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
        int a, b, c;
        cin >> a >> b >> c;
        if(c & 1 == 1){
            if(b > a) cout << "Second" << endl;
            else cout << "First" << endl;
        } else {
            if(a > b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }
    return 0;
}