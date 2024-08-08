#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            a[i] = c - '0';
        }
        vi pref(n + 1);
        pref[0] = 0;
        for(int i = 0; i < n; i++){
            pref[i + 1] = pref[i] + a[i];
        }
        map<int, int> cnt;
        for(int i = 0; i <=n; i++){
            cnt[pref[i]-i]++;
        }
        ll ans = 0;
        for(auto i : cnt){
            ans += (i.second * 1LL * (i.second - 1)) / 2LL;
        }
        cout << ans << endl;
    }
    return 0;
}