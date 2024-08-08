#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

vi spf;
void sieve(int n){
    spf.resize(n+1, 1);
    for(ll i=2; i<=n; i++){
        if(spf[i] == 1){
            spf[i] = i;
            for(ll j=i*i; j<=n; j+=i){
                if(spf[j] == 1) spf[j] = i;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    sieve(1000000);
    while(t--){
        int n, x;
        cin >> n;
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> x;
            while(x != 1){
                mp[spf[x]]++;
                x /= spf[x];
            }
        }
        bool flag = false;
        for(auto i: mp){
            if(i.s % n){
                flag = true;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}