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
        int n, tmp, prev, mn = INT_MAX;
        cin >> n >> prev;
        for(int i=1; i<n; i++){
            cin >> tmp;
            mn = min(mn, tmp-prev);
            prev = tmp;
        }
        mn+=2;
        mn = mn/2;
        if(mn <= 0) cout << 0 << endl;
        else cout << mn << endl;
    }
    return 0;
}