#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    if(n <= m){
        int ans = 1;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans = (ans * 1LL * abs(a[i] - a[j])) % m;
            }
        }
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}