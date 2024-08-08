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
        int n, k;
        string s;
        cin >> n >> k >> s;
        map<int, map<char, int>> mp;
        for(int i = 1; i <= n; i++){
            int m = i % k;
            if(m == 0) m += k;
            if(m > k / 2) m = k - m + 1;
            mp[m][s[i-1]]++;
        }
        int ans = 0;
        for(auto p : mp){
            int mx = 0, sum = 0;
            for(auto q : p.s){
                sum += q.s;
                mx = max(mx, q.s);
            }
            ans += sum - mx;
        }
        cout << ans << endl;
    }
    return 0;
}