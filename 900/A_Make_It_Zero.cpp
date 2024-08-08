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
        int n, tmp;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> tmp;
        }
        if(n % 2 == 0){
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        } else {
            cout << 4 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << n << endl;
            cout << 2 << " " << n << endl;
        }
    }
    return 0;
}