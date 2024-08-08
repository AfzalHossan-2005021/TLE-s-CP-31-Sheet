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
        int ans = 0;
        while(n % 3 == 0){
            n /= 3;
            ans++;
        }
        int setBits = __builtin_popcount(n);
        if(setBits == 1){
            int two = 0;
            while(n > 1){
                n = n >> 1;
                two++;
            }
            if(ans >= two){
                cout << 2 * ans - two << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}