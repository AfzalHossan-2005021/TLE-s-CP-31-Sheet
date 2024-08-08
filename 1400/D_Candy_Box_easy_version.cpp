#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        map<int , int> mp;
        for(int i = 0; i < n; i++){
            cin >> x;
            mp[x]++;
        }
        vi cnt;
        for(auto &p : mp){
            cnt.push_back(p.s);
        }
        sort(cnt.rbegin(), cnt.rend());
        int ans = 0, valid = INT_MAX;
        for(int i = 0; i < cnt.size(); i++){
            if(valid <= 0) break;
            valid = min(valid, cnt[i]);
            ans += valid;
            valid--;
        }
        cout << ans << endl;
    }
    return 0;
}