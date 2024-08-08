#include<bits/stdc++.h>
 
#define endl "\n"
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        n++;
        int a[n];
        a[0] = 0;
        for(int i = 1; i < n; i++){
            cin >> a[i];
        }
        int diff[n];
        for(int i = 0; i < n-1; i++){
            diff[i] = a[i+1] - a[i];
        }
        diff[n-1] = 2 * (x - a[n-1]);
        int min = diff[0];
        for(int i = 1; i < n; i++){
            if(diff[i] > min){
                min = diff[i];
            }
        }
        cout << min << endl;
    }
    return 0;
}