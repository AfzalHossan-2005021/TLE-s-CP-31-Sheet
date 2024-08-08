#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p;
    cin >> n;
    vi c(n+1), c_child(n+1, 1), ans;
    for(int i = 1; i <= n; i++){
        cin >> p;
        cin >> c[i];
        if(p > 0) c_child[p] &= c[i];
    }
    for(int i = 1; i <= n; i++){
        if(c[i] && c_child[i]){
            ans.push_back(i);
        }
    }
    if(ans.empty()){
        cout << -1 << endl;
    } else {
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}