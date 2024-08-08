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
        int n, r, b;
        cin >> n >> r >> b;
        int div = r / (b + 1);
        int rem = r % (b + 1);
        for(int i = 0; i < b; i++){
            for(int j = 0; j < div; j++){
                cout << "R";
            }
            if(rem){
                cout << "R";
                rem--;
            }
            cout << "B";
        }
        for(int j = 0; j < div; j++){
            cout << "R";
        }
        if(rem){
            cout << "R";
            rem--;
        }
        cout << endl;
    }
    return 0;
}