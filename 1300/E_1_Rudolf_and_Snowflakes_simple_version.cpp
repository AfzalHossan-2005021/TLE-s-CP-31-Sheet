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
    map<ll, int> snowflakes;
    for(ll i = 2; i < 1000LL ; i++){
        ll sum = 1LL + i;
        for(ll j = i * i; j < 1000000LL; j *= i){
            sum += j;
            if(sum > 1000000LL){
                break;
            }
            if(snowflakes.find(sum) == snowflakes.end()){
                snowflakes[sum] = 1;
            }
        }
    }
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(snowflakes.find(n) == snowflakes.end()){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}