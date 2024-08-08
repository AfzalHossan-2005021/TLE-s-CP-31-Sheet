#include<bits/stdc++.h>

using namespace std;

#define ld long double
#define vi vector<int>
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vi a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ld ans = 0.0, week_sum = 0.0;
    for(int i = 0; i < k; i++){
        week_sum += (ld)a[i];
    }
    ans = week_sum;
    for(int i = k; i < n; i++){
        week_sum += (ld)(a[i] - a[i-k]);
        ans += week_sum;
    }
    cout << fixed << setprecision(10) << ans/(n-k+1) << endl;
    return 0;
}