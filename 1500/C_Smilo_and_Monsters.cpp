#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for(auto &x : a){
            cin >> x;
        }
        sort(a.rbegin(), a.rend());
        vector<ll> pref(n+1);
        pref[0] = 0;
        for(int i = 0; i < n; i++){
            pref[i+1] = pref[i] + a[i];
        }
        ll total = (pref[n] >> 1);
        int i = 1;
        while(pref[i] <= total) i++;
        ll attack = pref[i-1] + (i - 1);
        ll rest = pref[n] - (pref[i-1] << 1);
        if(rest > 3){
            ll frac = (rest >> 1);
            attack += frac + 1;
            attack += rest - (frac << 1);
        } else {
            attack += rest;
        }
        cout << attack << endl;
    }
    return 0;
}