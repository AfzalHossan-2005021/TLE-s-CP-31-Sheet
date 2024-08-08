#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

ll get_div_count(ll n, ll div){
    ll count = 0;
    while(n % div == 0 && n > 0){
        count++;
        n /= div;
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n, k, n_twos = 0LL, n_fives = 0LL;
        cin >> n >> k;
        n_twos = get_div_count(n, 2LL);
        n_fives = get_div_count(n, 5LL);
        ll mult = 1LL;
        ll tens = min(n_twos, n_fives);
        if(n_twos < n_fives){
            while(mult * 2LL <= k && n_fives - tens > 0LL){
                mult *= 2LL;
                tens++;
            }
        } else if(n_twos > n_fives){
            while(mult * 5LL <= k && n_twos - tens > 0LL){
                mult *= 5LL;
                tens++;
            }
        }
        while(mult * 10LL <= k){
            mult *= 10LL;
        }
        cout << n * (k / mult) * mult << endl;
    }
    return 0;
}