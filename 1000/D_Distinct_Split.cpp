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
        vi fwd(n), rev(n);
        unordered_set<char> fwd_set, rev_set;
        fwd[0] = 1;
        fwd_set.insert(s[0]);
        for(int i = 1; i < n; i++){
            if(fwd_set.find(s[i]) == fwd_set.end()){
                fwd_set.insert(s[i]);
                fwd[i] = fwd[i-1] + 1;
            } else {
                fwd[i] = fwd[i-1];
            }
        }
        rev[n-1] = 1;
        rev_set.insert(s[n-1]);
        for(int i = n-2; i >= 0; i--){
            if(rev_set.find(s[i]) == rev_set.end()){
                rev_set.insert(s[i]);
                rev[i] = rev[i+1] + 1;
            } else {
                rev[i] = rev[i+1];
            }
        }
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            ans = max(ans, fwd[i] + rev[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}