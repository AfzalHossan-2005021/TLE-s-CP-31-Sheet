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
        cin >> n;;
        vector<int> a, b;
        cin >> tmp;
        a.push_back(tmp);
        for(int i = 1; i < n; i++){
            cin >> tmp;
            if(tmp <= a.back() && b.size() == 0){
                a.push_back(tmp);
            } else if(b.size() == 0){
                b.push_back(tmp);
            } else if(tmp > a.back() && tmp <= b.back()){
                b.push_back(tmp);
            } else if(tmp > b.back() && tmp <= a.back()){
                a.push_back(tmp);
            } else {
                if(a.back() < b.back()){
                    a.push_back(tmp);
                } else {
                    b.push_back(tmp);
                }
            }
        }
        int ans = 0, n1 = a.size() - 1, n2 = b.size() - 1;
        for(int i = 0; i < n1; i++){
            if(a[i] < a[i + 1]){
                ans++;
            }
        }
        for(int i = 0; i < n2; i++){
            if(b[i] < b[i + 1]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}