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
        ll n, x, y;
        cin >> n >> x >> y;
        ll lcm_x_y = lcm(x, y);
        ll x_div = n / x;
        ll y_div = n / y;
        ll lcm_div = n / lcm_x_y;
        x_div -= lcm_div;
        y_div -= lcm_div;
        ll upper = n, lower = n - x_div + 1;
        ll x_sum = (upper + lower) * x_div / 2;
        lower = 1;
        upper = y_div;
        ll y_sum = (upper + lower) * y_div / 2;
        cout << x_sum - y_sum << endl;
    }
    return 0;
}