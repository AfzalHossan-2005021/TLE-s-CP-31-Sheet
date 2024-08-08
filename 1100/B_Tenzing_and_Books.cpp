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
        int n, x, tmp;
        cin >> n >> x;
        int k = 0;
        int rev = ~x;
        bool flag = false;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(!flag){
                if(rev & tmp){
                    flag = true;
                } else {
                    k |= tmp;
                }
            }
        }
        flag = false;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(!flag){
                if(rev & tmp){
                    flag = true;
                } else {
                    k |= tmp;
                }
            }
        }
        flag = false;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(!flag){
                if(rev & tmp){
                    flag = true;
                } else {
                    k |= tmp;
                }
            }
        }
        if(k == x){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}