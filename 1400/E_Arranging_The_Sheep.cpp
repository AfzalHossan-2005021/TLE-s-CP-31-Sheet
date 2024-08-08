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
        string s;
        cin >> n >> s;
        vi pos;
        for(int i = 0; i < n; i++){
            if(s[i] == '*'){
                pos.push_back(i);
            }
        }
        int m = pos.size();
        int mid = m/2;
        vi zero_count(m, 0);
        for(int i = mid - 1; i >= 0; i--){
            zero_count[i] = zero_count[i + 1] + (pos[i + 1] - pos[i] - 1);
        }
        for(int i = mid + 1; i < m; i++){
            zero_count[i] = zero_count[i - 1] + (pos[i] - pos[i - 1] - 1);
        }
        ll ans = 0LL;
        for(int i = 0; i < m; i++){
            ans += (ll)zero_count[i];
        }
        cout << ans << endl;
    }
    return 0;
}