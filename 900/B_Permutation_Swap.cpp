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
        int n, gcd = -1;
        cin >> n;
        for(int i = 1; i <= n; i++){
            int a;
            cin >> a;
            int diff = abs(i - a);
            if(diff){
                if(gcd == -1){
                    gcd = diff;
                }else{
                    gcd = __gcd(gcd, diff);
                }
            }
        }
        cout << gcd << endl;
    }
    return 0;
}