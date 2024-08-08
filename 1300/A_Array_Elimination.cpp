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
        int n, tmp;
        cin >> n;
        vi bit_pos(30, 0);
        for(int i = 0; i < n; i++){
            cin >> tmp;
            for(int j = 0; j < 30; j++){
                if(tmp & (1 << j)){
                    bit_pos[j]++;
                }
            }
        }
        int gcd = 0;
        for(int i = 0; i < 30; i++){
            gcd = __gcd(gcd, bit_pos[i]);
        }
        if(gcd == 0){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
            cout << endl;
        } else {
            for(int i = 1; i <= gcd; i++){
                if(gcd % i == 0){
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}