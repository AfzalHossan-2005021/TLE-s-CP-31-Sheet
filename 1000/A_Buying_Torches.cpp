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
        ll x, y, k, op_count;
        cin >> x >> y >> k;
        ll total_stick_inc = y * k + k - 1LL;
        ll inc_per_op = x - 1LL;
        if(total_stick_inc % inc_per_op == 0LL){
            op_count = total_stick_inc / inc_per_op;
        } else {
            op_count = total_stick_inc / inc_per_op + 1LL;
        }
        cout << op_count + k << endl;
    }
    return 0;
}