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
        ll n, x, y, tmp;
        cin >> n >> x >> y;
        ll lsb_one = 0LL;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp & 1LL){
                lsb_one++;
            }
        }
        if(x & 1LL){
            lsb_one ++;
        }
        lsb_one = lsb_one % 2LL;
        if(lsb_one == (y & 1LL)){
            cout << "Alice" << endl;
        }else{
            cout << "Bob" << endl;
        }
    }
    return 0;
}