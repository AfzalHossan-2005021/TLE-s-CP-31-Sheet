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
        int a, b;
        cin >> a >> b;
        if(a < b){
            cout << 1 << endl;
        } else if(a == 1){
            if(b == 1){
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        } else {
            int op_count = 0;
            while(log(a)/log(b) - log(a)/log(b+1) > 1.0){
                b++;
                op_count++; 
            }
            int op = (log(a)/log(b)) + 1;
            int tmp = 1;
            for(int i = 0; i < op; i++){
                tmp *= b;
            }
            if(tmp == a){
                cout << op + op_count + 1<< endl;
            } else {
                cout << op + op_count << endl;
            }
        }
    }
    return 0;
}