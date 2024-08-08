#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

vector<vi> bit_cnt;

int build_number(int prev, int upto){
    int ans = 0;
    int diff = upto - prev;
    for(int i = 0; i < 30; i++){
        if(bit_cnt[upto][i]-bit_cnt[prev][i] == diff){
            ans += (1 << i);
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, tmp;
        cin >> n;
        bit_cnt.resize(n+1, vi(30, 0));
        for(int i = 1; i <= n; i++){
            cin >> tmp;
            for(int j = 0; j < 30; j++){
                if(tmp & (1 << j)){
                    bit_cnt[i][j] = bit_cnt[i-1][j] + 1;
                } else {
                    bit_cnt[i][j] = bit_cnt[i-1][j];
                }
            }
        }
        int q;
        cin >> q;
        while(q--){
            int l, k;
            cin >> l >> k;
            int lower = l, upper = n, ans = -1;
            while(lower <= upper){
                int mid = (upper+lower)/2;
                int range_and = build_number(l-1, mid);
                if(range_and < k) upper = mid - 1;
                else {
                    lower = mid + 1;
                    ans = max(ans, mid);
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}