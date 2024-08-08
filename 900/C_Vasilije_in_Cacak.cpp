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
        ll n, k, x;
        cin >> n >> k >> x;
        ll lower_limit = k * (k + 1) / 2;
        ll upper_limit = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
        if(x < lower_limit || x > upper_limit){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}