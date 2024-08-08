#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int sign[2];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, ind = 0;
    cin >> n;
    ll pos_seg = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        sign[ind]++;
        if(x & (1 << 31)) ind ^= 1;
        pos_seg += sign[ind];
    }
    cout << n * (n + 1LL) / 2LL - pos_seg << " " << pos_seg << endl;
    return 0;
}