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
        int n, tmp, neg_count = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp < 0) neg_count++;
        }
        int pos_count = n - neg_count;
        if(pos_count < neg_count) {
            int op_count;
            int diff = neg_count - pos_count;
            if(diff % 2 == 0) op_count = diff/2;
            else op_count = (diff+1)/2;
            if(neg_count % 2 == 0){
                if(op_count % 2 == 0) cout << op_count << endl;
                else cout << op_count+1 << endl;
            } else {
                if(op_count % 2 == 0) cout << op_count+1 << endl;
                else cout << op_count << endl;
            }
        } else {
            if(neg_count % 2 == 0) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}