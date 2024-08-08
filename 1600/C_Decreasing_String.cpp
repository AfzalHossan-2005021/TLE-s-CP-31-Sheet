#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        ll pos;
        cin >> s >> pos;
        ll n = s.size();
        ll l = 0, r = n;
        ll completed = n;
        while(l <= r){
            ll m = (l + r) / 2;
            ll sum = (n * (n + 1) - m * (m + 1)) / 2;
            if(sum > pos) l = m + 1;
            else if(sum < pos){
                completed = min(completed, m);
                r = m - 1;
            } else {
                completed = m + 1;
                break;
            }
        }
        ll remaining = n - completed;
        stack<char>stk;
        for(int i = 0; i < n; i++){
            if(!stk.empty() && stk.top() > s[i] && remaining){
                stk.pop();
                remaining--;
                i--;
            } else {
                stk.push(s[i]);
            }
        }
        while(remaining){
            stk.pop();
            remaining--;
        }
        string tmp;
        while(!stk.empty()){
            tmp.push_back(stk.top());
            stk.pop();
        }
        reverse(tmp.begin(), tmp.end());
        pos -= (n * (n + 1) - completed * (completed + 1)) / 2 + 1;
        cout << tmp[pos];
    }
    cout << endl;
    return 0;
}