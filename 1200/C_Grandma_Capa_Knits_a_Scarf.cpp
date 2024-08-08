#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int num_of_changes(string s, int l, int r, int to_erase){
    int ans = 0;
    while(l < r){
        if(s[l] == s[r]){
            l++;
            r--;
        } else if(s[l] == to_erase){
            l++;
            ans++;
        } else if(s[r] == to_erase){
            r--;
            ans++;
        } else {
            ans = -1;
            break;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int ans = 0;
        int l = 0, r = n-1;
        int ans1 = 0, ans2 = 0;
        while(l < n){
            if(s[l] == s[r]){
                l++;
                r--;
            } else {
                ans1 = num_of_changes(s, l, r, s[l]);
                ans2 = num_of_changes(s, l, r, s[r]);
                break;
            }
        }
        if(ans1 == -1 && ans2 == -1){
            cout << -1 << endl;
        } else if(ans1 == -1){
            cout << ans2 << endl;
        } else if(ans2 == -1){
            cout << ans1 << endl;
        } else {
            cout << min(ans1, ans2) << endl;
        }
    }
    return 0;
}