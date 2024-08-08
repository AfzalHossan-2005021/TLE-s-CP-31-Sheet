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
        vi a(m);
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vi diff;
        for(int i = 1; i < m; i++){
            diff.push_back(a[i] - a[i - 1] - 1);
        }
        diff.push_back(n-a[m-1]+a[0]-1);
        sort(diff.rbegin(), diff.rend());
        int day = 0;
        for(int i = 0; i < diff.size(); i++){
            if(day * 2 + 1 < diff[i]){
                diff[i] = day * 2 + 1;
                day+=2;
            } else if(day * 2 + 1 == diff[i]){
                diff[i]--;
                break;
            } else {
                break;
            }
        }
        int ans = accumulate(diff.begin(), diff.end(), m);
        cout << ans << endl;
    }
    return 0;
}