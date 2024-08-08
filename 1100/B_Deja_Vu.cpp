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
        ll n, q, tmp;
        cin >> n >> q;
        vector<ll> a(n), x;
        for(ll i = 0LL; i < n; i++){
            cin >> a[i];
        }
        cin >> tmp;
        ll mn = tmp;
        x.push_back(tmp);
        for(ll i = 1LL; i < q; i++){
            cin >> tmp;
            if(tmp < mn){
                mn = tmp;
                x.push_back(tmp);
            }
        }
        vector<ll> suffix_sum(x.size());
        suffix_sum[x.size()-1LL] = (1LL << (x[x.size()-1LL]-1LL));
        for(ll i = x.size()-2LL; i >= 0LL; i--){
            suffix_sum[i] = suffix_sum[i+1LL] + (1LL << (x[i]-1LL));
        }
        for(ll i = 0LL; i < n; i++){
            for(ll j = 0LL; j < x.size(); j++){
                if(a[i] % (1LL << x[j]) == 0LL){
                    a[i] += suffix_sum[j];
                    break;
                }
            }
        }
        for(ll i = 0LL; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}