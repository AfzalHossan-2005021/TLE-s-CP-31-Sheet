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
    int n, m;
    cin >> n >> m;
    map<int, vector<int>> mp1, mp2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int tmp;
            cin >> tmp;
            mp1[tmp].push_back(i);
            mp2[tmp].push_back(j);
        }
    }
    ll ans = 0LL;
    for(auto it = mp1.begin(); it != mp1.end(); it++){
        vi &a = it->s;
        sort(a.begin(), a.end());
        ll k = a.size();
        for(ll i = 0; i < k; i++){
            ans += (2LL*i - k + 1LL)*(ll)a[i];
        }
    }
    for(auto it = mp2.begin(); it != mp2.end(); it++){
        vi &a = it->s;
        sort(a.begin(), a.end());
        ll k = a.size();
        for(ll i = 0; i < k; i++){
            ans += (2LL*i - k + 1LL)*(ll)a[i];
        }
    }
    cout << ans << endl;
    return 0;
}