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
        ll x, n;
        cin >> x >> n;
        ll dist = (n+1)/2;
        ll eff_jump = n % 4;
        for(int i = eff_jump - 1; i >= 0; i--){
            if(x & 1){
                x += n - i;
            } else {
                x -= n - i;
            }
        }
        cout << x << endl;
    }
    return 0;
}