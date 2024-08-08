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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for(ll i = 0L; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<pair<ll, ll>> elem_count;
        for(ll i = 0L; i < n; i++){
            ll curr = a[i];
            ll curr_cnt = 1LL;
            ll j = i + 1LL;
            while(j < n && a[j] == curr){
                j++;
                curr_cnt++;
            }
            elem_count.push_back({curr, curr_cnt});
            i = j - 1LL;
        }
        if(elem_count.size() == 1){
            cout << elem_count[0].f + x / elem_count[0].s << endl;
            continue;
        }
        ll mx_h, mn_h, h;
        bool flag = false;
        ll cons_total = 0, cons_len = 0;
        for(int i = 0; i < elem_count.size()-1; i++){
            mn_h = elem_count[i].f;
            mx_h = elem_count[i+1].f;
            ll curr_len = cons_len + elem_count[i].s;
            ll curr_total = cons_total + curr_len * (mx_h - mn_h);
            if(curr_total <= x){
                cons_total = curr_total;
                cons_len = curr_len;
            } else {
                flag = true;
                ll diff = x - cons_total;
                h = mn_h + diff / curr_len;
                break;
            }
        }
        if(!flag){
            ll diff = x - cons_total;
            h = mx_h + diff / n;            
        }
        cout << h << endl;
    }
    return 0;
}