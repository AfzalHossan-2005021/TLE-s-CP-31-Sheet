#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> permutation(10);
    for(int i = 0; i < 10; i++) permutation[i] = ((i+1)*(i+2))/2;
    int t;
    cin >> t;
    while(t--){
        int n, digit;
        cin >> n;
        long long ans = 1;
        while(n){
            digit = n % 10;
            n /= 10;
            ans *= permutation[digit];
        }
        cout << ans << endl;
    }
    return 0;
}