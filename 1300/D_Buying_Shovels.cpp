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
        int n, k;
        cin >> n >> k;
        int ans = n;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                if(n / i <= k){
                    ans = min(ans, i);
                }
                if(i <= k){
                    ans = min(ans, n / i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}