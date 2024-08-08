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
        int n;
        cin >> n;
        vector<int> x(n), y(n), diff(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        for(int i = 0; i < n; i++){
            cin >> y[i];
            diff[i] = y[i] - x[i];
        }
        sort(diff.rbegin(), diff.rend());
        int ans = 0, fwd = 0, bwd = n - 1;
        while(fwd < bwd){
            if(diff[fwd] + diff[bwd] >= 0){
                ans ++;
                fwd++;
            }
            bwd--;
        }
        cout << ans << endl;
    }
    return 0;
}