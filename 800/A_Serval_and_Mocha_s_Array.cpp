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
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int min_gcd = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                min_gcd = min(min_gcd, __gcd(arr[i], arr[j]));
            }
        }
        if(min_gcd < 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}