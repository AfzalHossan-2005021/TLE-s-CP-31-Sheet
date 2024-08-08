#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, tmp;
        cin >> n;
        vector<int> a(n), b, c;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        b.push_back(a[0]);
        for(int i = 1; i < n; i++){
            if(*(b.end() - 1) % a[i] == 0){
                b.push_back(a[i]);
            }else{
                c.push_back(a[i]);
            }
        }
        if(c.size() == 0 || b.size() == 0){
            cout << -1 << endl;
        }else{
            cout << b.size() << " " << c.size() << endl;
            for(int i = 0; i < b.size(); i++){
                cout << b[i] << " ";
            }
            cout << endl;
            for(int i = 0; i < c.size(); i++){
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}