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
        vi a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vi pos(2*n+1, -1);
        for(int i = 1; i <= n; i++){
            pos[a[i]] = i;
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= (2*n-1)/a[i]; j++){
                if(pos[j] == -1 || j == a[i] || i >= pos[j]){
                    continue;
                }
                if(pos[j] + i == j * a[i]){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}