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
        string s;
        cin >> s;
        unordered_set<char> st;
        vector<ll> distinct_cnt(n);
        for(int i = 0; i < s.size(); i++){
            st.insert(s[i]);
            distinct_cnt[i] = (ll)st.size();
        }
        ll ans = 0LL;
        for(int i = 0; i < n; i++){
            ans += distinct_cnt[i];
        }
        cout << ans << endl;
    }
    return 0;
}