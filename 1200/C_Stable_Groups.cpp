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
    int n;
    ll k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> diff;
    for(int i = 1; i < n; i++){
        if(a[i]-a[i-1] > x){
            diff.push_back(a[i]-a[i-1]-x);
        }
    }
    sort(diff.begin(), diff.end());
    for(int i = 0; i < diff.size(); i++){
        if(diff[i] % x == 0){
            k -= diff[i]/x;
        } else {
            k -= diff[i]/x+1;
        }
        if(k < 0){
            break;
        } else {
            diff[i] = 0;
        }
    }
    int ans = 0;
    for(int i = 0; i < diff.size(); i++){
        if(diff[i] > 0){
            ans++;
        }
    }
    cout << ans+1 << endl;
    return 0;
}