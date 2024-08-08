#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

pii digit_count(int n){
    int count = 0;
    int mst;
    while(n){
        count++;
        mst = n % 10;
        n /= 10;
    }
    return {count, mst};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pii p = digit_count(n);
        int digit = p.f;
        int mst = p.s;
        int extreme_round = 0;
        for(int i = 0; i < digit-1; i++){
            extreme_round += 9;
        }
        extreme_round += mst;
        cout << extreme_round << endl;
    }
    return 0;
}