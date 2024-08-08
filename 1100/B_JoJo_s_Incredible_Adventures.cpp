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
        string s;
        cin >> s;
        ll n = s.size();
        vector<ll> cons_one_count(n, 0LL);
        int first_zero_pos = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                first_zero_pos = i;
                break;
            }
        }
        ll mx = 0LL;
        if(first_zero_pos == -1){
            cout << n * n << endl;
        } else{
            for(int i = 0; i < n; i++){
                int p = (i + first_zero_pos) % n;
                int q = (i + first_zero_pos + 1) % n;
                if(s[q] == '1'){
                    cons_one_count[q] = cons_one_count[p] + 1LL;
                }
                mx = max(mx, cons_one_count[q]);
            }
            ll ans = (mx + 1LL) / 2LL;
            ans *= (mx + 1LL - ans);
            cout << ans << endl;
        }
    }
    return 0;
}