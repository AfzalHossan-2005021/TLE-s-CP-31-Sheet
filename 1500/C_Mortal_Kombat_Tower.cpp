#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        a.push_back(0);
        int skip = 0, one_cnt = 0;
        if(a[0]) skip++;
        for(int i = 1; i <= n; i++){
            if(a[i]){
                one_cnt++;
            } else {
                skip += one_cnt / 3;
                one_cnt = 0;
            }
        }
        cout << skip << endl;
    }
    return 0;
}