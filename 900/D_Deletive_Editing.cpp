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
    cin.ignore();
    while(t--){
        string s, t;
        cin >> s >> t;
        vector<stack<int>> pos(26);
        for(int i = 0; i < s.size(); i++){
            pos[s[i] - 'A'].push(i);
        }
        bool flag = false;
        int p = s.size()-1, q = t.size()-1;
        while(p >= 0 && q >= 0){
            if(s[p] == t[q]){
                if(!pos[t[q]-'A'].empty() && p == pos[t[q]-'A'].top()){
                    pos[t[q]-'A'].pop();
                    p--;
                    q--;
                } else {
                    flag = true;
                    break;
                }
            } else {
                p--;
            }
        }
        if(!flag && q < 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}