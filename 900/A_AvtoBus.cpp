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
        ll n, mn, mx;
        cin >> n;
        if((n & 1) || n < 4){
            cout << -1 << endl;
        } else {
            if(n % 6 == 0){
                mn = n/6;
            } else {
                mn = n/6 + 1;
            }
            mx = n/4;
            if(mx < 0) mx = 1;
            if(mn < 0) mn = 1;
            cout << mn << " " << mx << endl;
        }
    }
    return 0;
}