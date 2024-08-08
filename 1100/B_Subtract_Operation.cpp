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
        int n, k;
        cin >> n >> k;
        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        bool flag = false;
        for(int i=0; i<n; i++){
            int l = i+1, r = n-1;
            while(l <= r){
                int m = l + (r-l)/2;
                if(a[i] - a[m] == k){
                    flag = true;
                    break;
                } else if(a[i] - a[m] > k){
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
            if(flag) break;
        }
        if(flag){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}