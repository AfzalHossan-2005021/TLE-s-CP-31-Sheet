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
    vi a(t), b(t), b_index(t);
    for(int i = 0; i < t; i++){
        cin >> a[i];
        a[i]--;
    }
    int pos = 0;
    for(int i = 0; i < t; i++){
        cin >> b[i];
        b[i]--;
        b_index[b[i]] = i;
    }
    int ans = 0, mx = 0;
    for(int i = 0; i < t; i++){
        if(b_index[a[i]] < mx){
            ans ++;
        } else {
            mx = b_index[a[i]];
        }
    }
    cout << ans << endl;    
    return 0;
}