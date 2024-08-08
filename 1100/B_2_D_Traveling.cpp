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
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<ll, ll>> pos(n);
        for(int i = 0; i < n; i++){
            cin >> pos[i].f >> pos[i].s;
        }
        
        ll cost = llabs(pos[a-1].f - pos[b-1].f) + llabs(pos[a-1].s - pos[b-1].s);
        if(k == 0){
            cout << cost << endl;
            continue;
        }
        ll in_cost, out_cost;
        if(a > k){
            in_cost = LLONG_MAX;
            for(int i = 0; i < k; i++){
                in_cost = min(in_cost, abs(pos[a-1].f - pos[i].f) + abs(pos[a-1].s - pos[i].s));
            }
        } else {
            in_cost = 0;
        }
        if(b > k){
            out_cost = LLONG_MAX;
            for(int i = 0; i < k; i++){
                out_cost = min(out_cost, abs(pos[b-1].f - pos[i].f) + abs(pos[b-1].s - pos[i].s));
            }
        } else {
            out_cost = 0;
        }
        cout << min(cost, in_cost + out_cost) << endl;
    }
    return 0;
}