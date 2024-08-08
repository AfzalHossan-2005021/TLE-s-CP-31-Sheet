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
        string s;
        cin >> s;
        if(s.size() == 1){
            cout << "YES" << endl;
            continue;
        }
        unordered_set<char> st;
        for(char c : s){
            st.insert(c);
        }
        int distinct = st.size();
        if(distinct == s.size()){
            cout << "YES" << endl;
            continue;
        }
        bool flag = false;
        for(int i = distinct; i < s.size(); i++){
            if(s[i] != s[i-distinct]){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}