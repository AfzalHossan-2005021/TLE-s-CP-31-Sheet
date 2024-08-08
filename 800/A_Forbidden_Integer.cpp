#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        if(x == 1){
            if((n & 1) == 0 && k >= 2){
                cout << "YES" << endl;
                cout << n/2 << endl;
                for(int i = 0; i < n/2; i++){
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else if(n > 1 && k >= 3){
                int temp = (n-3)/2;
                cout << "YES" << endl;
                cout << temp+1 << endl;
                for(int i = 0; i < temp; i++){
                    cout << 2 << " ";
                }
                cout << 3 << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 0; i < n; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}