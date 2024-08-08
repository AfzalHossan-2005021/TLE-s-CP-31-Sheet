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
        int n;
        cin >> n;
        vector<int> ans;
        int a, b, c;
        cin >> a >> b;
        ans.push_back(a);
        for(int i = 2; i < n; i++){
            cin >> c;
            if(!((a < b && b < c) || (a > b && b > c))){
                ans.push_back(b);
            }
            a = b;
            b = c;
        }
        if(n > 2) ans.push_back(c);
        else ans.push_back(b);
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}