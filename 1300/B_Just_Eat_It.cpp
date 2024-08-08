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
        vector<ll> a(n);
        ll Yasser = 0LL;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            Yasser += a[i];
        }
        vector<ll> dp1(n-1), dp2(n-1);
        dp1[0] = a[0];
        dp2[0] = a[1];
        for(int i = 1; i < n-1; i++){
            dp1[i] = max(dp1[i - 1] + a[i], a[i]);
            dp2[i] = max(dp2[i - 1] + a[i + 1], a[i + 1]);
        }
        ll Adel = max(*max_element(dp1.begin(), dp1.end()), *max_element(dp2.begin(), dp2.end()));
        if(Adel >= Yasser){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}