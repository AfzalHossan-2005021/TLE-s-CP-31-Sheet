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
        int n, w, tmp;
        cin >> n >> w;
        vi a(n), bit_pos(20, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            for(int j = 0; j < 20; j++){
                if(a[i] & (1 << j)){
                    bit_pos[j]++;
                }
            }
        }
        int ans = 0;
        while(n > 0){
            ans++;
            int p = w;
            for(int i = 19; i >= 0; i--){
                int x = 1 << i;
                int cnt = p / x;
                cnt = min(cnt, bit_pos[i]);
                p -= cnt * x;
                n -= cnt;
                bit_pos[i] -= cnt;
            }
        }
        cout << ans << endl;
    }
    return 0;
}