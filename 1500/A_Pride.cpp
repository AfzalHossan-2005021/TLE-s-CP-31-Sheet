#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    int n;
    cin >> n;
    vi a(n);
    for(int &x : a) cin >> x;
    int range = n;
    for(int i = 0; i < n; i++){
        int range_gcd = a[i];
        if(range_gcd == 1){
            range = 0;
            break;
        }
        for(int j = i+1; j < n; j++){
            range_gcd = __gcd(range_gcd, a[j]);
            if(range_gcd == 1){
                range = min(range, j-i);
                break;
            }
        }
    }
    if(range == n) cout << -1 << endl;
    else if(range == 0) cout << n - count(a.begin(), a.end(), 1) << endl;
    else cout << n+range-1 << endl;
    return 0;
}