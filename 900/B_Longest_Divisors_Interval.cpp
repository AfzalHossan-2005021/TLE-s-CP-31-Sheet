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
        ll n, i;
        cin >> n;
        for(i = 1; ; i++){
            if(n % i){
                break;
            }
        }
        cout << i - 1 << endl;
    }
    return 0;
}