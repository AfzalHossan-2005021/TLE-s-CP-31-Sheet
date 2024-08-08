#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, mx_elem = 0, mn_elem = INT_MAX, mx_idx, mn_idx;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > mx_elem){
                mx_elem = a[i];
                mx_idx = i;
            }
            if(a[i] < mn_elem){
                mn_elem = a[i];
                mn_idx = i;
            }
        }
        int  mx = a[n-1] - a[0];
        for(int i = 1; i < n; i++){
            mx = max(a[i-1] - a[i], mx);
        }
        if(mx_idx != n-1)
            mx = max(mx, mx_elem - a[0]);
        if(mn_idx != 0)
            mx = max(mx, a[n-1] - mn_elem);
        cout << mx << endl;
    }
    return 0;
}