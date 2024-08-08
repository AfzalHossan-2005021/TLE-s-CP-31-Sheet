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
        vector<ll> c(n);
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        if(c[0] != 1LL){
            cout << "NO" << endl;
            continue;
        }
        vector<ll> pref(n+1);
        pref[0] = 0LL;
        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + c[i-1];
        }
        bool flag = false;
        for(int i = 1; i < n; i++){
            if(c[i] > pref[i]){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}