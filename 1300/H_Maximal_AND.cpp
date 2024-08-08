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
        int n, k, tmp, ans = -1;
        cin >> n >> k;
        vi bit_pos(31, 0);
        for(int i = 0; i < n; i++){
            cin >> tmp;
            ans &= tmp;
            for(int j = 0; j < 31; j++){
                if(tmp & (1 << j)){
                    bit_pos[j]++;
                }
            }
        }
        for(int i = 30; i >= 0; i--){
            int op_count = n - bit_pos[i];
            if(op_count <= k){
                ans |= (1 << i);
                k -= op_count;
            }
        }
        cout << ans << endl;
    }
    return 0;
}