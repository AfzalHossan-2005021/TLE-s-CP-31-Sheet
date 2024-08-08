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
        int n, k, tmp;
        cin >> n >> k;
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp % k != 0){
                freq[k - tmp % k]++;
            }
        }
        ll ans = 0LL;
        for(auto it = freq.begin(); it != freq.end(); it++){
            ans = max(ans, (ll)k * (ll)(it->s - 1) + (ll)it->f + 1LL);
        }
        cout << ans << endl;
    }
    return 0;
}