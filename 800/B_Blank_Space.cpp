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
        vector<int> a(n+1, 0);
        for(int i = 1; i <= n; i++){
            cin >> tmp;
            if(tmp == 0){
                a[i] = a[i-1] + 1;
            }
        }
        cout << *max_element(a.begin(), a.end()) << endl;
    }
    return 0;
}