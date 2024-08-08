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
        int a_shift = 0, b_shift = 0;
        while(!(a & 1)){
            a >>= 1LL;
            a_shift++;
        }
        while(!(b & 1)){
            b >>= 1LL;
            b_shift++;
        }
        if(a != b){
            cout << -1 << endl;
        } else {
            int diff = abs(a_shift - b_shift);
            if(diff % 3 == 0){
                cout << diff / 3 << endl;
            } else {
                cout << diff / 3 + 1 << endl;
            }
        }
    }
    return 0;
}