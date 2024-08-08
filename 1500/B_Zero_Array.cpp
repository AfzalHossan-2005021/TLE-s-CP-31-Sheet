#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, tmp , mx = -1;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        sum += tmp;
        mx = max(mx, tmp);
    }
    if(sum & 1) cout << "NO\n";
    else {
        if(mx > sum / 2) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}