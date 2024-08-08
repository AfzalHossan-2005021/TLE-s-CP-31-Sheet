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
    int n, q, tmp;
    ll sum = 0LL;
    cin >> n >> q;
    map<int, int> ump;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        sum += (ll)tmp;
        ump[i+1] = tmp;
    }
    int all = -1;
    for(int j = 0; j < q; j++){
        int t;
        cin >> t;
        if(t == 1){
            int i, x;
            cin >> i >> x;
            if(ump.empty() || ump.find(i) == ump.end()){
                sum += (ll)(x - all);
            } else {
                sum += (ll)(x - ump[i]);
            }
            ump[i] = x;
        } else {
            int x;
            cin >> x;
            ump.clear();
            all = x;
            sum = ((ll)n)*((ll)x);
        }
        cout << sum << endl;
    }
    return 0;
}