#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    string s; cin >> s;
    vector<vector<vi>> cnt(3, vector<vi>(3, vi(n+1, 0)));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = j + 1; k <= n; k+=3){
                cnt[i][j][k] = (s[k-1] - 'a' == i);
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 1; k <= n; k++){
                cnt[i][j][k] += cnt[i][j][k - 1];
            }
        }
    }

    while(m--){
        int l, r; cin >> l >> r;
        int need = r - l + 1;
        int ans = need;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    if(i == j || j == k || k == i) continue;
                    int exist = cnt[i][0][r] - cnt[i][0][l - 1] + cnt[j][1][r] - cnt[j][1][l - 1] + cnt[k][2][r] - cnt[k][2][l - 1];
                    ans = min(ans, abs(need - exist));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}