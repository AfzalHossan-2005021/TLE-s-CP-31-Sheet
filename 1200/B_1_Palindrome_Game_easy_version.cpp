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
        string s;
        cin >> n >> s;
        int zeros = 0, alice = 0, bob = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                zeros++;
            }
        }
        if(zeros == 1 || !(zeros & 1)){
            cout << "BOB" << endl;
        } else {
            cout << "ALICE" << endl;
        }
    }
    return 0;
}