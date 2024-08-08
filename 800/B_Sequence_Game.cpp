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
        vector<int> v;
        cin >> tmp;
        v.push_back(tmp);
        for(int i = 1; i < n; i++){
            cin >> tmp;
            if(tmp < *(v.end()-1)){
                v.push_back(tmp);
            }
            v.push_back(tmp);
        }
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}