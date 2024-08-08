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
        int n, q;
        cin >> n >> q;
        vi a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vi prefix(n + 1), suffix(n + 2);
        prefix[0] = 0;
        suffix[n+1] = 0;
        for(int i = 1; i <= n; i++){
            prefix[i] = prefix[i-1] + a[i];
            suffix[n-i+1] = suffix[n-i+2] + a[n-i+1];
        }
        while(q--){
            int l, r, k;
            cin >> l >> r >> k;
            int sum = prefix[l - 1] + suffix[r + 1] + k * (r-l+1);
            if(sum % 2){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}