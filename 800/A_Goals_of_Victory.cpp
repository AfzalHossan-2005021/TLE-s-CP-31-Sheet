#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0, tmp;
        cin >> n;
        for(int i = 0; i < n-1; i++){
            cin >> tmp;
            sum += tmp;
        }
        cout << -sum << endl;
    }
    return 0;
}