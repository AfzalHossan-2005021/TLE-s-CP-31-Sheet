#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int mn = INT_MAX;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        mn = min(mn, abs(n));
    }
    cout << mn << endl;
    return 0;
}