#include<bits/stdc++.h>

using namespace std;

#define ull long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ull n, x;
        cin >> n >> x;
        if(n == x){
            cout << n << endl;
            continue;
        } else if(n == 0){
            cout << -1 << endl;
            continue;
        }
        ull fst_one;
        for(fst_one = 0 ; fst_one < 64; fst_one++){
            if((x & (1LL << fst_one))){
                break;
            }
        }
        bool flag = false;
        for(ull i = fst_one; i < 64; i++){
            if((n & (1LL << i)) != (x & (1LL << i))){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << -1 << endl;
            continue;
        } else {
            ull lst_one;
            for(lst_one = fst_one - 1; lst_one > -1; lst_one--){
                if((n & (1ULL << lst_one))){
                    break;
                }
            }
            if(lst_one == fst_one - 1){
                cout << -1 << endl;
            } else if(x == 0){
                cout << (1LL << (lst_one + 1)) << endl;
            } else {
                cout << (n & (~((1LL << fst_one) - 1))) + (1LL << (lst_one + 1)) << endl;
            }
        }
    }
    return 0;
}