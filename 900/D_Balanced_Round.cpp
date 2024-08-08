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
        int n, k, count = 0;
        cin >> n >> k;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vi diff(n);
        diff[0] = INT_MAX;
        for(int i = 1; i < n; i++){
            diff[i] = a[i] - a[i-1];
        }
        vi valid(n, 1);
        for(int i = 1; i < n; i++){
            if(diff[i] <= k){
                valid[i] = valid[i - 1] + 1;               
            }
        }
        cout << n - *max_element(valid.begin(), valid.end()) << endl;
    }
    return 0;
}