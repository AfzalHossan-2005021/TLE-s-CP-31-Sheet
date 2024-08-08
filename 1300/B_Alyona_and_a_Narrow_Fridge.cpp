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
    int n, h;
    cin >> n >> h;
    vi a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    vi tmp;
    for(int i = 0; i < a.size(); i++){
        tmp.push_back(a[i]);
        sort(tmp.rbegin(), tmp.rend());
        vi op_v = tmp;
        if(op_v.size() & 1) op_v.push_back(op_v.back());
        int tmp_ans = 0;
        int tmp_h = h;
        for(int j = 0; j < op_v.size(); j+=2){
            int mx = max(op_v[j], op_v[j+1]);
            int mn = min(op_v[j], op_v[j+1]);
            if(mx > tmp_h){
                if(mn > tmp_h)break;
                tmp_ans += 1;
                break;
            } else {
                tmp_ans += 2;
                tmp_h -= mx;
            }
        }
        if(tmp_ans < i + 1) break;
        ans = max(ans, i + 1);
    }
    if(ans > n) cout << n << endl;
    else cout << ans << endl;
    return 0;
}