#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, pii>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].f >> a[i].s.f;
            a[i].s.s = i;
        }
        sort(a.begin(), a.end());
        vi ans(n);
        int r = a[0].s.f, prev = a[0].s.s;
        int one_count = 1, two_count = 0;
        ans[a[0].s.s] = 1;
        for(int i = 1; i < n; i++){
            if(a[i].f <= r){
                if(ans[prev] == 1){
                    ans[a[i].s.s] = 1;
                    one_count++;
                } else {
                    ans[a[i].s.s] = 2;
                    two_count++;
                }
            } else {
                if(ans[prev] == 1){
                    ans[a[i].s.s] = 2;
                    two_count++;
                } else {
                    ans[a[i].s.s] = 1;
                    one_count++;
                }
            }
            if(a[i].s.f >= r){
                r = a[i].s.f;
                prev = a[i].s.s;
            }
        }
        if(!one_count || !two_count){
            cout << -1 << endl;
        } else {
            for(int x : ans) cout << x << " "; cout << endl;
        }
    }
    return 0;
}