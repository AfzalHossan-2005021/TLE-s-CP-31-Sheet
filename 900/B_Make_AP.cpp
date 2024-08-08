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
        int a, b, c;
        cin >> a >> b >> c;;
        int target_a = b - (c - b), target_c = b + (b - a);
        if((a+c) % 2 == 0){
            int target_b = (a + c) / 2;
            if((target_a > 0 && target_a % a == 0) || (target_b > 0 && target_b % b == 0) || (target_c > 0 && target_c % c == 0)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        } else {
            if((target_a > 0 && target_a % a == 0) || (target_c > 0 && target_c % c == 0)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}