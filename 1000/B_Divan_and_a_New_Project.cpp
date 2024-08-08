#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool comparator(pii a, pii b){
    return a.s > b.s;
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
            a[i].f = i + 1;
        }
        sort(a.begin(), a.end(), comparator);
        vector<pii> ans;
        int pos = 1, neg = -1, flag = 1;
        ans.push_back({0, 0});
        ll min_time = 0LL;
        for(int i = 0; i < n; i++){
            if(flag == 1){
                ans.push_back({a[i].f, pos});
                min_time += (ll)abs(pos) * (ll)a[i].s;
                pos++;
            } else {
                ans.push_back({a[i].f, neg});
                min_time += (ll)abs(neg) * (ll)a[i].s;
                neg--;
            }
            flag *= -1;
        }
        min_time *= 2LL;
        sort(ans.begin(), ans.end());
        cout << min_time << endl;
        for(int i = 0; i <= n; i++){
            cout << ans[i].s << " ";
        }
        cout << endl;
    }
    return 0;
}