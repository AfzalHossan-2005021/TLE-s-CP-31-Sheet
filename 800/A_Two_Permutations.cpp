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
        int n, a, b;
        cin >> n >> a >> b;
        if((a == b && b == n) || n-(a+b) > 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}