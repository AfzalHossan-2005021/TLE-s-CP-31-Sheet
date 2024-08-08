#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k, tmp;
        bool flag = false;
        cin >> n >> k;
        for (int i = 0; i < n; i++){
            cin >> tmp;
            if (tmp == k){
                flag = true;
            }
        }
        if (flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}