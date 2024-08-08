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
        int n, k;
        char tmp;
        cin >> n >> k;
        vi a(n+1, 0);
        for(int i = 1; i <= n; i++){
            cin >> tmp;
            if(tmp == 'W'){
                a[i] = a[i - 1] + 1;
            } else {
                a[i] = a[i - 1];
            }
        }
        int ans = INT_MAX;
        for(int i = 1; i + k - 1 <= n; i++){
            ans = min(ans, a[i + k - 1] - a[i - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}