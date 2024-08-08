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
        ll a, b, n, tmp;
        cin >> a >> b >> n;
        ll count = b;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp >= a) tmp = a - 1;
            count += tmp;
        }
        cout << count << endl;
    }
    return 0;
}