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
        int n;
        cin >> n;
        vector<vector<ll>> a(n);
        for(int i = 0; i < n; i++){
            int m;
            cin >> m;
            for(int j = 0; j < m; j++){
                ll x;
                cin >> x;
                a[i].push_back(x);
            }
        }
        vector<ll> ans;
        ll mn = LONG_LONG_MAX;
        for(int i = 0; i < n; i++){
            auto it = min_element(a[i].begin(), a[i].end());
            mn = min(mn, *it);
            a[i].erase(it);
        }
        for(int i = 0; i < n; i++){
            ll p = *min_element(a[i].begin(), a[i].end());
            ans.push_back(p);
        }
        ans.erase(min_element(ans.begin(), ans.end()));
        ll sum = accumulate(ans.begin(), ans.end(), 0LL);
        cout << sum + mn << endl;
    }
    return 0;
}