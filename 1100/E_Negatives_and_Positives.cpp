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
        ll a[n];
        ll neg = 0LL, mn = LLONG_MAX, sum = 0LL;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] < 0){
                neg++;
            }
            a[i] = abs(a[i]);
            sum += a[i];
            mn = min(mn, a[i]);
        }
        if(neg & 1LL){
            sum -= 2LL*mn;
        }
        cout << sum << endl;
    }
    return 0;
}