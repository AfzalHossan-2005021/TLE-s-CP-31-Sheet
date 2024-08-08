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
        int n, m;
        cin >> n >> m;
        vi a(n), cnt(m, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i] % m]++;
        }
        int ans = 0;
        if(cnt[0] > 0){
            cnt[0] = 1;
        }
        for(int i = 1; i <= m/2; i++){
            if(cnt[i] > 0 && cnt[m-i] > 0){
                if(cnt[i] < cnt[m-i]){
                    cnt[m-i] -= cnt[i] + 1;
                    cnt[i] = 0;
                } else if(cnt[i] > cnt[m-i]){
                    cnt[i] -= cnt[m-i] + 1;
                    cnt[m-i] = 0;
                } else {
                    cnt[i] = cnt[m-i] = 0;
                }
                ans++;
            }
        }
        ans += accumulate(cnt.begin(), cnt.end(), 0);
        cout << ans << endl;
    }
    return 0;
}