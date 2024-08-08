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
        int n, tmp;
        cin >> n;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp == 2) arr.push_back(i);
        }
        if(arr.size() == 0){
            cout << 1 << endl;
        } else if(arr.size() % 2 == 0){
            cout << arr[(arr.size() / 2)-1]+1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}