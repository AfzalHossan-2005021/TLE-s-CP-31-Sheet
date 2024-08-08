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
        string s;
        cin >> s;
        ll ans = 0LL;
        for(int i = 1; i <= n; i++){
            if(s[i-1] != '1'){
                int j = 1;
                while(i * j <= n){
                    if(s[i * j - 1] == '1'){
                        break;
                    }
                    if(s[i * j - 1] == '0'){
                        s[i * j - 1] = '2';
                        ans += i;
                    }
                    j++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}