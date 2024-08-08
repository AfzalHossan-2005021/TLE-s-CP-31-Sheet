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
        vector<ll> a(n), range_count(30, 0LL);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            range_count[(int)(log2(a[i]))]++;
        }
        ll ans = 0LL;
        for(int i = 0; i < 30; i++){
            if(range_count[i] > 1LL)
                ans += (range_count[i] * (range_count[i] - 1LL)) / 2LL;
        }
        cout << ans << endl;
    }
    return 0;
}