#include<bits/stdc++.h>
 
#define endl "\n"
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(k >1){
            cout << "YES" << endl;
        }else{
            bool non_decreasing = true;
            for(int i = 1; i < n; i++){
                if(a[i-1] > a[i]){
                    cout << "NO" << endl;
                    non_decreasing = false;
                    break;
                }
            }
            if(non_decreasing){
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}