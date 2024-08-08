#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    vi a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    priority_queue<int> pq;
    for(int i = 0; i < n; i++){
        pq.push(abs(a[i]-b[i]));
    }
    int op_count = k1+k2;
    while(op_count--){
        int x = pq.top();
        pq.pop();
        if(x == 0){
            pq.push(1);
        } else if(x == 1){
            pq.push(0);
        } else {
            pq.push(x-1);
        }
    }
    ll ans = 0;
    while(!pq.empty()){
        ans += (1ll*pq.top())*pq.top();
        pq.pop();
    }
    cout << ans << endl;
    return 0;
}