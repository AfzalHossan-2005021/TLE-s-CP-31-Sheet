#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int op_count = 0;
        
        while (x.find(s) >= x.length())	
        {
            x = x + x;
            op_count++;
            if(op_count > 5){
                op_count = -1;
                break;
            }
        }
        cout << op_count << endl;
    }
    return 0;
}