#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

#define MAXN 200001
vector<int> spf(MAXN + 1, 1);

void sieve(){
    spf[0] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == 1) {
            for (int j = i; j <= MAXN; j += i) {
                if (spf[j]== 1)
                    spf[j] = i;
            }
        }
    }
}

map<int, int> getFactorization(int x){
    map<int, int> ret;
    while (x != 1) {
        ret[spf[x]]++;
        x = x / spf[x];
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    vi a(n);
    for(int &i : a) cin >> i;
    sieve();
    vector<pii> mn_two(MAXN, {INT_MAX, INT_MAX});
    vi cnt(MAXN, 0);
    for(int i = 0; i < n; i++){
        map<int, int> mp = getFactorization(a[i]);
        for(auto j : mp){
            mn_two[j.f].s = min(mn_two[j.f].s, j.s);
            if(mn_two[j.f].f > mn_two[j.f].s){
                swap(mn_two[j.f].f, mn_two[j.f].s);
            }
            cnt[j.f]++;
        }
    }
    ll ans = 1;
    for(int i = 0; i < MAXN; i++){
        if(cnt[i] == n - 1){
            mn_two[i].s = mn_two[i].f;
        }
        if(cnt[i] >= n - 1){
            for(int j = 0; j < mn_two[i].s; j++){
                ans *= i;
            }
        }
    }
    cout << ans << endl;         
    return 0;
}