#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1, -1);
    int mx_idx = 1;
    for(int i = 2; i <= n; i++){
        int p, q;
        cout << "? " << mx_idx << " " << i << endl;
        cin >> p;
        cout << "? " << i << " " << mx_idx << endl;
        cin >> q;
        if(p < q){
            a[i] = q;
        } else {
            a[mx_idx] = p;
            mx_idx = i;
        }
    }
    a[mx_idx] = n;
    cout << "! ";
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}