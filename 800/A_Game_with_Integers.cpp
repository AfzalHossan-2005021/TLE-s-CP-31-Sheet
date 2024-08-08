#include<bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 3){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }
    }
    return 0;
}