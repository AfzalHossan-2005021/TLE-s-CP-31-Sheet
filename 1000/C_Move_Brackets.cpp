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
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push(s[i]);
            } else {
                if(st.empty()){
                    cnt++;
                } else {
                    st.pop();
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}