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
    int n, q, t;
    cin >> n >> q;
    vi a(n), pos(51, INT_MAX);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n - 1; i > -1; i--){
        pos[a[i]] = i + 1;
    }
    for(int i = 0; i < q; i++){
        cin >> t;
        cout << pos[t] << " ";
        for(int j = 1; j <= 50; j++){
            if(pos[j] < pos[t]){
                pos[j]++;
            }
        }
        pos[t] = 1;        
    }
    cout << endl;
    return 0;
}