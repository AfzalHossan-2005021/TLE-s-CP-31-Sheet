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
        int n;
        cin >> n;
        int ans = 1;
        int mn_lcm = n-1;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                int a = n/i;
                int b = n - a;
                int _lcm = lcm(a, b);
                if(_lcm < mn_lcm){
                    mn_lcm = _lcm;
                    ans = a;
                }
            }
        }
        cout << ans << " " << n - ans << endl;
    }
    return 0;
}