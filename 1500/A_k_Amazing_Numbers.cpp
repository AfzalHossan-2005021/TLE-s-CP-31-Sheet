#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n), ans(n, -1);
        for(int i = 0; i < n; i++) cin >> a[i];
        map<int, vi> mp;
        for(int i = 0; i < n; i++){
            mp[a[i]].push_back(i);
        }
        for(auto x: mp){
            x.s.push_back(n);
            int mx = x.s[0] + 1;
            for(int i = 1; i < x.s.size(); i++){
                mx = max(mx, x.s[i] - x.s[i - 1]);
            }
            mx--;
            if(ans[mx] > x.f || ans[mx] < 0) ans[mx] = x.f;
        }
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            if(ans[i] != -1) mn = min(mn, ans[i]);
            if(mn != INT_MAX) ans[i] = mn;
        }
        for(int i = 0; i < n; i++) cout << ans[i] << " "; cout << endl;
    }
    return 0;
}