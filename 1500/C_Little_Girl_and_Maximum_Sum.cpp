#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    int n, q;
    cin >> n >> q;
    vi a(n);
    for(int &x : a) cin >> x;
    vi cnt(n+1, 0);
    while(q--){
        int l, r;
        cin >> l >> r;
        cnt[l]++;
        if(r < n) cnt[r+1]--;
    }
    priority_queue<ll> pq;
    for(int i = 1; i <= n; i++){
        cnt[i] += cnt[i-1];
        if(cnt[i] > 0) pq.push(cnt[i]);
    }

    sort(a.begin(), a.end());
    ll ans = 0;
    while(!pq.empty()){
        ans += pq.top() * a.back();
        pq.pop();
        a.pop_back();
    }
    cout << ans << endl;
    return 0;
}