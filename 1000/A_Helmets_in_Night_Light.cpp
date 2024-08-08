#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool comperator(pii a, pii b){
    if(a.s == b.s) return a.f > b.f;
    return a.s < b.s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].f;
        }
        for(int i = 0; i < n; i++){
            cin >> a[i].s;
        }
        sort(a.begin(), a.end(), comperator);
        ll ans = k;
        ll received = 1;
        ll remaining = n-1;
        for(int i = 0; i < n; i++){
            if(remaining <= 0) break;
            if(received == 0){
                remaining --;
                ans += k;
                received ++;
            }
            if(remaining <= 0) break;
            if(a[i].s >= k){
                ans += remaining * k;
                break;
            } else {
                if(a[i].f >= remaining){
                    ans += remaining * a[i].s;
                    break;
                } else {
                    remaining -= a[i].f;
                    ans += a[i].f * a[i].s;
                    received += a[i].f;
                }
            }
            received --;
        }
        cout << ans << endl;
    }
    return 0;
}