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
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vi cnt(1, 0);
        int last = 0;
        int prev = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == prev){
                cnt[last]++;
            } else if(a[i] == prev + 1){
                cnt.push_back(1);
                last++;
                prev++;
            } else {
                cnt.push_back(0);
                cnt.push_back(1);
                last += 2;
                prev = a[i];
            }
        }
        cnt.push_back(0);
        int ans = 0;
        for(int i = 1; i < cnt.size(); i++){
            if(cnt[i] < cnt[i - 1]){
                ans += cnt[i - 1] - cnt[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}