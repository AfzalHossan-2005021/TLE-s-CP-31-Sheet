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
        int n = s.size();
        int zero = 0, one = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') zero++;
            else one++;
        }
        int i = 0;
        while(i < n){
            if(s[i] == '0'){
                if(one <= 0) break;
                one--;
            }
            else {
                if(zero <= 0) break;
                zero--;
            }
            i++;
        }
        cout << one + zero << endl;
    }
    return 0;
}