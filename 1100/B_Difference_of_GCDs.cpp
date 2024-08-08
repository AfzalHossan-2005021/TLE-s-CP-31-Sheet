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
        int n, l, r;
        cin >> n >> l >> r;
        vi a;
        for(int i=1; i<=n; i++){
            int x = (r / i) * i;
            if(x < l) break;
            a.push_back(x);
        }
        if(a.size() < n){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}