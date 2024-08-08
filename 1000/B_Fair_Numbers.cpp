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
        ll n;
        cin >> n;
        for(ll i = 0LL; i <= 2520LL; i++){
            ll _lcm = 1LL;
            ll tmp_n = n + i;
            ll tmp = tmp_n;
            while(tmp){
                ll digit = tmp % 10LL;
                if(digit != 0LL){
                    _lcm = lcm(_lcm, digit);
                }
                tmp /= 10LL;
            }
            if(tmp_n % _lcm == 0LL){
                cout << tmp_n << endl;
                break;
            }
        }
    }
    return 0;
}