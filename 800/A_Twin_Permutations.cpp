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
        int n, tmp;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            cout << n + 1 - tmp << " ";
        }
        cout << endl;
    }
    return 0;
}