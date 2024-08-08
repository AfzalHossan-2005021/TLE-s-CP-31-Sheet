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
        int n, m, tmp;
        cin >> n >> m;
        vi k(n), c(m);
        for(int i = 0; i < n; i++){
            cin >> k[i];
        }
        for(int i = 0; i < m; i++){
            cin >> c[i];
        }
        sort(k.rbegin(), k.rend());
        vector<bool> gifted(n, false);
        ll cost = 0LL;
        int gift_no = 0;
        int friend_no;
        for(friend_no = 0; friend_no < n; friend_no++){
            if(k[friend_no] <= gift_no + 1) break;
            cost += c[gift_no];
            gifted[friend_no] = true;
            gift_no++;
        }
        for(int i = 0; i < n; i++){
            if(!gifted[i]){
                cost += c[k[i]-1];
            }
        }
        cout << cost << endl;
    }
    return 0;
}