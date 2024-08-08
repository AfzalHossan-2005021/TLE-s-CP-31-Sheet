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
    int m = 1000000007;
    while(t--){
        int n;
        cin >> n;
        vi a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(!(a[i] > b[i])){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << 0 << endl;
            continue;
        }
        vi greater_count(n);
        int j = 0, count = 0;
        for(int i = 0; i < n; i++){
            while(j < n && a[j] > b[i]){
                j++;
                count++;
            }
            greater_count[i] = count;
        }
        ll ans = 1;
        for(int i = 0; i < n; i++){
            ans = (ans * ((greater_count[i] - i)%m)) % m;
        }
        cout << ans << endl;
    }
    return 0;
}