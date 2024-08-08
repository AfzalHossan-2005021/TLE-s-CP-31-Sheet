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
        int n, tmp, odd_count = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            odd_count = odd_count ^ tmp;
        }
        if(odd_count & 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}