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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(a[n-1] < a[n-2]){
            cout << -1 << endl;
            continue;
        }
        int i;
        bool flag = false;
        for(i = n-1; i > 0; i--){
            if(a[i] < a[i-1]){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << 0 << endl;
            continue;
        }
        if(a[i]-a[n-1] > a[i]){
            cout << -1 << endl;
            continue;
        }
        cout << i << endl;
        for(int j = 1; j <= i; j++){
            cout << j << " " << i+1 << " " << n << endl;
        }
    }
    return 0;
}