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
        int a, b, k, tmp;
        cin >> a >> b >> k;
        vi a_count(a + 1, 0), b_count(b + 1, 0);
        vector<pii> edges(k);
        for(int i = 0; i < k; i++){
            cin >> edges[i].f;
            a_count[edges[i].f]++;

        }
        for(int i = 0; i < k; i++){
            cin >> edges[i].s;
            b_count[edges[i].s]++;
        }
        ll ans = 0LL;
        for(int i = 0; i < k; i++){
            ans += (ll)(k - i - a_count[edges[i].f] - b_count[edges[i].s] + 1);
            a_count[edges[i].f]--;
            b_count[edges[i].s]--;
        }
        cout << ans << endl;
    }
    return 0;
}