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
        int n, tmp;
        cin >> n;
        vector<pii> a;
        vi cnt(n+1, 0);
        for(int i = 1; i <= n; i++){
            cin >> tmp;
            cnt[i] = cnt[i-1];
            if(tmp < i){
                a.push_back({i, tmp});
                cnt[i]++;
            }
        }
        ll ans = 0LL;
        for(int i = 0; i < a.size(); i++){
            if(a[i].s > 0){
                ans += (ll)cnt[a[i].s - 1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}