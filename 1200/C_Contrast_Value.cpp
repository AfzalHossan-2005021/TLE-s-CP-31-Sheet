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
        int prev = a[0];
        int prev_diff = 0;
        int ans = n;
        bool diff_set = false;
        for(int i = 1; i < n; i++){
            if(a[i] == prev){
                ans--;
                continue;
            }
            int curr_diff = a[i] - prev;
            if((curr_diff >= 0 && prev_diff >= 0) || (curr_diff <= 0 && prev_diff <= 0)){
                if(diff_set) ans--;
            }
            prev_diff = curr_diff;
            diff_set = true;
            prev = a[i];
        }
        cout << ans << endl;
    }
    return 0;
}