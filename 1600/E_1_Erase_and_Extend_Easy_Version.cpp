#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    string s;
    cin >> n >> k >> s;
    int first_greater = 1;
    for(; first_greater < n; first_greater++){
        if(s[first_greater] > s[0]) break;
        else if(s[first_greater] == s[0]){
            int i = 0, j = first_greater;
            bool less = false, greater = false;
            while(j < n && i < first_greater){
                if(s[i] < s[j]){
                    less = true;
                    break;
                } else if(s[i] > s[j]){
                    greater = true;
                    break;
                }
                i++; j++;
            }
            if(less) break;
            else if(greater){
                first_greater = j;
            } else if(j == n) {
                break;
            } else {
                first_greater = j - 1;
            }
        }
    }
    string ans = s.substr(0, first_greater);
    while(ans.size() < k){
        ans += ans;
    }
    ans = ans.substr(0, k);
    cout << ans << endl;
    return 0;
}