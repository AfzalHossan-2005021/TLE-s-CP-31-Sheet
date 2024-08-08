#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vi b(n+1);
    map<int, vi> mp;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        mp[b[i]-i].push_back(i);
    }
    ll ans = 0LL;
    for(auto x: mp){
        vi a = x.s;
        ll sum = 0LL;
        for(int i = 0; i < a.size(); i++){
            sum += (ll)b[a[i]];
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}