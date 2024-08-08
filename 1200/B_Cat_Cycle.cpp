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
        int n, k;
        cin >> n >> k;
        if(n % 2 == 0){
            cout << (k % n == 0 ? n : k % n) << endl;
        } else {
            int m = n / 2;
            int cross_count = (k-1) / m;
            int last_pos = k + cross_count;
            cout << (last_pos % n == 0 ? n : last_pos % n) << endl;
        }
    }
    return 0;
}