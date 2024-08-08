#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q, x;
        cin >> n >> q;
        vi a(n), mx(n+1);
        vector<ll> height(n+1);
        mx[0] = 0;
        height[0] = 0LL;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx[i+1] = max(mx[i], a[i]);
            height[i+1] = height[i] + (ll)a[i];
        }

        for(int i = 0; i < q; i++){
            cin >> x;
            auto it = upper_bound(mx.begin(), mx.end(), x);
            int idx = it - mx.begin();
            cout << height[idx-1] << " ";
        }
        cout << endl;
    }
    return 0;
}