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
        vi u(n);
        map<int, vi> teams;
        for(int i = 0; i < n; i++){
            cin >> u[i];
        }
        for(int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            teams[u[i]].push_back(tmp);
        }
        vector<ll> ans(n + 1, 0);
        for(auto it = teams.begin(); it != teams.end(); it++){
            vi &a = it->s;
            sort(a.rbegin(), a.rend());
            int k = a.size();
            vector<ll> pref(k + 1, 0LL);
            for(int i = 0; i < k; i++){
                pref[i + 1] = pref[i] + (ll)a[i];
            }
            for(int i = 1; i <= k; i++){
                int index = (k / i) * i;
                ans[i] += pref[index];
            }
        }
        for(int i = 1; i <= n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}