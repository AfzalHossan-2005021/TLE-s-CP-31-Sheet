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
        ll a, b;
        cin >> a >> b;
        if(a == b){
            cout << 0 << " " << 0 << endl;
        } else {
            ll diff = abs(a - b);
            ll mn = min(a, b);
            ll op_count = mn % diff;            
            op_count = min(op_count, diff - op_count);
            cout << diff << " " << op_count << endl;
        }
    }
    return 0;
}