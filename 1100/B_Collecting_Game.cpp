#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool comparator(pii a, pii b){
    return a.s < b.s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pii> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].s;
            a[i].f = i;
        }
        sort(a.begin(), a.end(), comparator);
        vector<ll> prefix_sum(n);
        prefix_sum[0] = (ll)a[0].s;
        for(int i = 1; i < n; i++){
            prefix_sum[i] = prefix_sum[i - 1] + (ll)a[i].s;
        }
        vector<pii>ans(n);
        ans[n-1] = {a[n-1].f, n-1};
        for(int i = n -2; i >= 0; i--){
            if(prefix_sum[i] >= (ll)a[i+1].s){
                ans[i] = {a[i].f, ans[i+1].s};
            } else {
                ans[i] = {a[i].f, i};
            }
        }
        sort(ans.begin(), ans.end());
        for(int i = 0; i < n; i++){
            cout << ans[i].s << " ";
        }
        cout << endl;
    }
    return 0;
}