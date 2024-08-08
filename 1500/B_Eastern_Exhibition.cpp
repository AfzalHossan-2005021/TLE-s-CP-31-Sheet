#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi x(n), y(n);
        for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        ll dx = x[n / 2] - x[(n - 1) / 2] + 1;
        ll dy = y[n / 2] - y[(n - 1) / 2] + 1;
        cout << dx * dy << endl;
    }
    return 0;
}