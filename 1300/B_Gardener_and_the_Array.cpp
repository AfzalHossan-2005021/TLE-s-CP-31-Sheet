#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
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
        vector<vi> a(n);
        map<int, int> pos;
        for(int i = 0; i < n; i++){
            int m;
            cin >> m;
            a[i].resize(m);
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                pos[a[i][j]]++;
            }
        }
        bool flag;
        for(int i = 0; i < n; i++){
            flag = true;
            for(int j = 0; j < a[i].size(); j++){
                if(pos[a[i][j]] == 1){
                    flag = false;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}