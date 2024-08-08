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
        ll n, tmp;
        cin >> n;
        vector<ll> a, b;
        for(int i=0; i<n; i++){
            cin >> tmp;
            if(i%2 == 0){
                a.push_back(tmp);
            }else{
                b.push_back(tmp);
            }
        }
        if(n == 1 || (n == 2 && a[0] != b[0])){
            cout << "NO" << endl;
            continue;
        }
        vector<ll> prefix_a(a.size()+1), prefix_b(b.size()+1);
        prefix_a[0] = 0LL;
        prefix_b[0] = 0LL;
        for(int i=1; i<=a.size(); i++){
            prefix_a[i] = prefix_a[i-1] + a[i-1];
        }
        for(int i=1; i<=b.size(); i++){
            prefix_b[i] = prefix_b[i-1] + b[i-1];
        }
        bool flag = false;
        map<ll, int> diff1, diff2;
        diff1[0] = 1;
        diff2[prefix_a[1]] = 1;
        for(int i=1; i<=b.size(); i++){
            ll diff = prefix_a[i] - prefix_b[i];
            if(diff1.count(diff) > 0 || diff2.count(diff) > 0){
                cout << "YES" << endl;
                flag = true;
                break;
            }
            diff1[diff] = 1;
            if(i < a.size()){
                diff = prefix_a[i+1] - prefix_b[i];
                if(diff1.count(diff) > 0 || diff2.count(diff) > 0){
                    cout << "YES" << endl;
                    flag = true;
                    break;
                }
                diff2[diff] = 1;
            }
        }
        if(!flag){
            cout << "NO" << endl;
        }
    }
    return 0;
}