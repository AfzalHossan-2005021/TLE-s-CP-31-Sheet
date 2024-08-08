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
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        int c_count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == c) c_count++;
        }
        if(c_count == n){
            cout << 0 << endl;
            continue;
        }
        bool flag = false;
        for(int i = n-1; i >= n/2; i--){
            if(s[i] == c){
                cout << 1 << endl;
                cout << i+1 << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;
        }
    }
    return 0;
}