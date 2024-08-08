#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k, z;
        cin >> n >> k >> z;
        vi a(n);
        for(int &x : a) cin >> x;
        int sum = a[0], mx_pair_sum = 0, mx_pair_indx;
        for(int i = 1; i <= k; i++){
            sum += a[i];
        }
        int ans = sum;
        for(int i = 1; i <=k; i++){
            int tmp_ans = sum, tmp_z = z;
            for(int j = k; j > i; j-=2){
                if(tmp_z == 0) break;
                tmp_ans += (a[i] + a[i - 1]) - (a[j] + a[j - 1]);
                tmp_z--;
            }
            ans = max(ans, tmp_ans);
        }
        cout << ans << endl;
    }
    return 0;
}