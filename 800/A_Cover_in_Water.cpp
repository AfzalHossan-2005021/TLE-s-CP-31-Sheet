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
        int n;
        cin >> n;
        char a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int sequence[n];
        int empty = 0;
        if(a[0] == '#'){
            sequence[0] = 0;
        }else{
            sequence[0] = 1;
            empty++;
        }
        int mx = 0;
        for(int i = 1; i < n; i++){
            if(a[i] == '#'){
                sequence[i] = 0;
            }else{
                sequence[i] = sequence[i-1] + 1;
                empty++;
            }
            mx = max(mx, sequence[i]);
        }
        if(mx <3){
            cout << empty << endl;
        }else{
            cout << 2 << endl;
        }
    }
    return 0;
}