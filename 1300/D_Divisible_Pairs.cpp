#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool comp(pii a, pii b){
    if(a.f == b.f)
        return (a.s < b.s);
    return a.f < b.f;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vi a(n), x_mod(n);
        vector<pii> y_mod (n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            x_mod[i] = a[i]%x;
            y_mod[i].f = a[i]%y;
            y_mod[i].s = i;
        }
        sort(y_mod.begin(), y_mod.end(), comp);
        vector<pii> ranges(1, {0, 0});
        for(int i=1; i<n; i++){
            if(y_mod[i].f != y_mod[i-1].f){
                ranges.back().s = i-1;
                ranges.push_back({i, i});
            }
        }
        ranges.back().s = n-1;
        ll ans = 0LL;
        for(int i = 0; i < ranges.size(); i++){
            map<int, ll> freq;
            for(int j = ranges[i].f; j <= ranges[i].s; j++){
                int index = y_mod[j].s;
                if(freq.count((x-x_mod[index])%x) > 0){
                    ans += freq[(x-x_mod[index])%x];
                }
                if(freq.count(x_mod[index]) > 0){
                    freq[x_mod[index]]++;
                } else {
                    freq[x_mod[index]] = 1LL;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}