#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, a, b, tmp, a_count = 0, b_count = 0, other_count = 0;
        cin >> n >> a;
        a_count++;

        for(int i = 1; i < n; i++){
            cin >> tmp;
            if(tmp == a) a_count++;
            else if(!b_count) {
                b = tmp;
                b_count++;
            }
            else if(tmp == b) b_count++;
            else other_count++;
        }
        if(other_count) cout << "NO" << endl;
        else if(!a_count || !b_count) cout << "YES" << endl;
        else if(a_count - b_count > 1) cout << "NO" << endl;
        else if(b_count - a_count > 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}