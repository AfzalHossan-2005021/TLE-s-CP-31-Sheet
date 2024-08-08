#include<bits/stdc++.h>

using namespace std;

#define s second
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 1; i < n - 1 && n > 2; i+=2){
        if(s[i] == s[i-1]){
            set<char> st;
            st.insert(s[i-1]);
            st.insert(s[i+1]);
            if(st.find('a') == st.end()) s[i] = 'a';
            else if(st.find('b') == st.end()) s[i] = 'b';
            else s[i] = 'c';
        } else if(s[i] == s[i+1]) {
            i--;
        }
    }
    if(s[n-1] == s[n-2]){
        if(s[n-1] == 'a') s[n-1] = 'b';
        else s[n-1] = 'a';
    }
    cout << s << endl;
    return 0;
}