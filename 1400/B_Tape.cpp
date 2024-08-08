#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = a[n-1] - a[0] + 1;
    for(int i = 0; i < n - 1; i++){
        a[i] = a[i+1] - a[i] - 1;
    }
    a.pop_back();
    sort(a.rbegin(), a.rend());
    for(int i = 0; i < k - 1; i++){
        ans -= a[i];
    }
    cout << ans << endl;
    return 0;
}