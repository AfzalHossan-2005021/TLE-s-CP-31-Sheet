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
        vi a(n+1), ans(n+1);
        a[0] = 1;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int upto = n;
        for(int i = n; i > 0; i--){
            int cnt = i - upto + 1;
            while(cnt <= a[upto]){
                upto--;
                cnt++;
            }
            ans[i] = cnt - 1;
        }
        for(int i = 1; i <= n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}