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
        int n, x, m;
        cin >> n >> x >> m;
        int l = x, r = x;
        for(int i = 0; i < m; i++){
            int a, b;
            cin >> a >> b;
            if((a <= l && l <= b) || (a <= r && r <= b)){
                l = min(l, a);
                r = max(r, b);
            }
        }
        cout << r - l + 1 << endl;
    }
    return 0;
}