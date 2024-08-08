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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if(c == 'g'){
            cout << 0 << endl;
        } else {
            vi next_g_pos(n);
            if(s[n-1] == 'g'){
                next_g_pos[n-1] = n-1;
            } else {
                next_g_pos[n-1] = n + s.find('g');
            }
            for(int i = n-2; i >= 0; i--){
                if(s[i] == 'g'){
                    next_g_pos[i] = i;
                } else {
                    next_g_pos[i] = next_g_pos[i+1];
                }
            }
            int ans = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == c){
                    ans = max( ans, next_g_pos[i] - i);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}