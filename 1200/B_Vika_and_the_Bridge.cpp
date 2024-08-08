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
        int n, k, tmp;
        cin >> n >> k;
        vi last(n+1, 0);
        vector<pii> max_two(n+1, {-1, -1});
        for(int i = 0; i < n; i++){
            cin >> tmp;
            int dist = i - last[tmp];
            last[tmp] = i + 1;
            if(dist > max_two[tmp].f){
                max_two[tmp].s = max_two[tmp].f;
                max_two[tmp].f = dist;
            }else if(dist > max_two[tmp].s){
                max_two[tmp].s = dist;
            }
        }
        int ans = INT_MAX;
        for(int i = 1; i <= k; i++){
            int dist = n - last[i];
            if(dist > max_two[i].f){
                max_two[i].s = max_two[i].f;
                max_two[i].f = dist;
            }else if(dist > max_two[i].s){
                max_two[i].s = dist;
            }
            max_two[i].f /= 2;
            ans = min(ans, max(max_two[i].f, max_two[i].s));
        }
        cout << ans << endl;
    }
    return 0;
}