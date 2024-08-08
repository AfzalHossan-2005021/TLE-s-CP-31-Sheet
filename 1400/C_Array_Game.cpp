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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n), diff;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                diff.push_back(abs(a[i] - a[j]));
            }
        }
        ll mn = min(*min_element(diff.begin(), diff.end()), *min_element(a.begin(), a.end()));
        if(k == 1){
            cout << mn << endl;
        } else if(k >= 3) {
            cout << 0 << endl;
        } else {
            sort(a.begin(), a.end());
            for(int i = 0; i < diff.size(); i++){
                auto it = lower_bound(a.begin(), a.end(), diff[i]);
                if(it != a.end()){
                    mn = min(mn, abs(diff[i] - *it));
                }
                if(it != a.begin()){
                    it--;
                    mn = min(mn, abs(diff[i] - *it));
                }
            }
            cout << mn << endl;
        }
    }
    return 0;
}