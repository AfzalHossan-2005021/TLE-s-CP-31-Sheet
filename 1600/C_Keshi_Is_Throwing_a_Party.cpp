#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vi a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
        int lb = 1, rb = n, ans = 0;
        while(lb <= rb){
            int md = (lb + rb) / 2;
            int cnt = 0;
            for(int i = 0; i < n; i++){
                if(b[i] >= cnt && a[i] >= md - cnt - 1) cnt++;
            }
            if(cnt >= md) {
                lb = md + 1;
                ans = md;
            }
            else rb = md - 1;
        }
        cout << ans << endl;
    }
    return 0;
}