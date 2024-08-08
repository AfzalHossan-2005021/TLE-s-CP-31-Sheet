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
        vi a(n), b(n);
        vector<ll> cnt(n, 0), add(n, 0), pref(n+1);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        pref[0] = 0;
        for(int i = 0; i < n; i++){
            pref[i+1] = pref[i] + b[i];
        }
        for(int i = 0; i < n; i++){
            int j = upper_bound(pref.begin(), pref.end(), a[i] + pref[i]) - pref.begin();
            cnt[i]++;
            j--;
            if(j < n){
                cnt[j]--;
                add[j] += a[i] + pref[i] - pref[j];
            }
        }
        for(int i = 1; i < n; i++){
            cnt[i] += cnt[i-1];
        }
        for(int i = 0; i < n; i++){
            cout << add[i] + cnt[i] * b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}