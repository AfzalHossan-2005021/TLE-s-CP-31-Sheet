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
        ll one_count = 0, zero_count = 0;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp == 0) zero_count++;
            else if(tmp == 1) one_count++;
        }
        ll zero_comb = 1LL << zero_count;
        ll seq_count = one_count * zero_comb;
        cout << seq_count << endl;
    }
    return 0;
}