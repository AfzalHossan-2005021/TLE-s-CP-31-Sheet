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
        char c, prev;
        cin >> n >> prev;
        vi serial(n, 1);
        for(int i = 1; i < n; i++){
            cin >> c;
            if(c == prev){
                serial[i] = serial[i - 1] + 1;
            }
            prev = c;
        }
        cout << 1 + *max_element(serial.begin(), serial.end()) << endl;
    }
    return 0;
}