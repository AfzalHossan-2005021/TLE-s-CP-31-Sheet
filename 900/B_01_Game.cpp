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
        int zero = 0, one = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                zero++;
            } else {
                one++;
            }
        }
        int ans = min(zero, one);
        if(ans % 2 == 0){
            cout << "NET" << endl;
        } else {
            cout << "DA" << endl;
        }
    }
    return 0;
}