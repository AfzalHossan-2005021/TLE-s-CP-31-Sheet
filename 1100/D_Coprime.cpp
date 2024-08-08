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
        int n, tmp;
        cin >> n;
        vi pos(1001, -1);
        for(int i=0; i<n; i++){
            cin >> tmp;
            pos[tmp] = i+1;
        }
        vector<pii> dist_num;
        for(int i=1; i<=1000; i++){
            if(pos[i] != -1){
                dist_num.push_back({pos[i], i});
            }
        }
        int ans = -1;
        for(int i = 0; i < dist_num.size(); i++){
            for(int j = 0; j < dist_num.size(); j++){
                int gcd = __gcd(dist_num[i].s, dist_num[j].s);
                if(gcd == 1){
                    ans = max(ans, dist_num[i].f + dist_num[j].f);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}