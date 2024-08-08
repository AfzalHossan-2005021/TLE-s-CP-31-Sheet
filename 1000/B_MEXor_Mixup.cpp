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
        int a, b;
        cin >> a >> b;
        int ex_or = 0;
        int start = (a / 4) * 4;
        for(int i = start; i < a; i++){
            ex_or ^= i;
        }
        if(ex_or == b){
            cout << a << endl;
        } else if((ex_or ^ b) == a){
            cout << a + 2 << endl;
        } else {
            cout << a + 1 << endl;
        }
    }
    return 0;
}
