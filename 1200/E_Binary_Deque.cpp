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
        int n, s, sum = 0;
        cin >> n >> s;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum < s){
            cout << -1 << endl;
            continue;
        } else if(sum == s){
            cout << 0 << endl;
            continue;
        }
        int diff = sum-s;
        vi pref_one_pos, suff_one_pos;
        pref_one_pos.push_back(0);
        suff_one_pos.push_back(n+1);
        for(int i = 0; i < n; i++){
            if(a[i] == 1 && pref_one_pos.size() <= diff) pref_one_pos.push_back(i+1);
            if(a[n-i-1] == 1 && suff_one_pos.size() <= diff) suff_one_pos.push_back(n-i);
        }
        int ans = n;
        for(int i = 0; i <= diff; i++){
            ans = min(ans, pref_one_pos[i]+n+1-suff_one_pos[diff-i]);
        }
        cout << ans << endl;
    }
    return 0;
}