#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, jor = 0;
        cin >> n;
        vi a(n);
        for(int &i : a) cin >> i;
        for(int &i : a) jor ^= i;
        if(jor == 0){
            cout << "YES" << endl;
            continue;
        }
        int cnt = 0, range_jor = 0;
        for(int i = 0; i < n; i++){
            range_jor ^= a[i];
            if(range_jor == jor){
                cnt++;
                range_jor = 0;
            }
        }
        if(cnt > 2 && range_jor == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}