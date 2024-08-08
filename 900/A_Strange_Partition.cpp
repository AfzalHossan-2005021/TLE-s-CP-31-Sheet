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
        ll n, x;
        cin >> n >> x;
        vector<ll>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll mn = 0, mx = 0;
        for(int i = 0; i < n; i++){
            int tmp = a[i] % x;
            mn += a[i];
            mx += a[i] / x + (tmp > 0);
        }
        mn = mn / x + (mn % x > 0);
        cout << mn << " " << mx << endl;
        
    }
    return 0;
}