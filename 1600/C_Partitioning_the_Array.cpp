#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n), divisors;
        for(int &x : a) cin >> x;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                divisors.push_back(i);
                if(i != n / i) divisors.push_back(n / i);
            }
        }
        sort(divisors.begin(), divisors.end());
        int ans = 0;
        for(int d : divisors){
            int gcd = 0;
            for(int i = 0; i < d; i++){
                for(int j = i + d; j < n; j += d){
                    gcd = __gcd(gcd, abs(a[i]-a[j]));
                }
            }
            if(gcd != 1) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}