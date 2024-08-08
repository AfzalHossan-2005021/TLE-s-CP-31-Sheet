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
        int n, k, op_count = 0;
        cin >> n >> k;
        vector<vi> a(n, vi(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] != a[n-i-1][n-j-1]){
                    a[i][j] = a[n-i-1][n-j-1];
                    op_count++;
                }
            }
        }
        if(op_count <= k ){
            if(n & 1){
                cout << "YES" << endl;
            }else{
                if((k - op_count) % 2 == 0){
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }            
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}