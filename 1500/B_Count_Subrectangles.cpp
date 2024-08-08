#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k, ones;
    cin >> n >> m >> k;
    vi a(n), b(m), a_ones, b_ones, k_div;
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    a.push_back(0);
    b.push_back(0);
    ones = 0;
    for(int x : a){
        if(x == 0 && ones > 0){
            a_ones.push_back(ones);
            ones = 0;
        } else if(x == 1) {
            ones ++;
        }
    }
    if(a_ones.size() <= 0) {
        cout << 0 << endl;
        return 0;
    }
    ones = 0;
    for(int x : b){
        if(x == 0 && ones > 0){
            b_ones.push_back(ones);
            ones = 0;
        } else if(x == 1) {
            ones ++;
        }
    }
    if(b_ones.size() <= 0){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 1; i * i <= k; i++){
        if(k % i == 0){
            k_div.push_back(i);
            if(k/i != i) k_div.push_back(k / i);
        }
    }
    sort(k_div.begin(), k_div.end());
    sort(a_ones.begin(), a_ones.end());
    sort(b_ones.begin(), b_ones.end());
    int p = a_ones.size(), q = b_ones.size();
    vi suf_a(p), suf_b(q);
    suf_a[p-1] = a_ones[p-1];
    suf_b[q-1] = b_ones[q-1];
    for(int i = p-1; i > 0; i--){
        suf_a[i-1] = suf_a[i] + a_ones[i-1];
    }
    for(int i = q-1; i > 0; i--){
        suf_b[i-1] = suf_b[i] + b_ones[i-1];
    }
    ll ans = 0;
    for(int x : k_div) {
        int l_a = lower_bound(a_ones.begin(), a_ones.end(), x) - a_ones.begin();
        if(l_a >= p) continue;
        int l_b = lower_bound(b_ones.begin(), b_ones.end(), k/x) - b_ones.begin();
        if(l_b >= q) continue;
        int sum_a = suf_a[l_a] - (x-1) * (p-l_a);
        int sum_b = suf_b[l_b] - (k/x-1) * (q-l_b);
        ans += sum_a * sum_b;
    }
    cout << ans << endl;
    return 0;
}