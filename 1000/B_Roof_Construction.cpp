#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int ms_set_bit(int n){
    int cnt = 0;
    while(n){
        n >>= 1;
        cnt++;
    }
    return cnt;
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
        vi a(n);
        int max_bit = ms_set_bit(n-1) - 1;
        int split = 1 << max_bit;
        for(int i = split - 1; i >= 0; i--){
            cout << i << " ";
        }
        for(int i = split; i < n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}