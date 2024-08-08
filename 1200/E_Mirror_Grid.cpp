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
        int n, ans = 0;
        cin >> n;
        vector<string> grid(n);
        for(int i = 0; i < n; i++){
            cin >> grid[i];
        }
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < (n+1)/2; j++){
                int zeros = 0, ones = 0;
                if(grid[i][j] == '0') zeros++;
                else ones++;
                if(grid[j][n-i-1] == '0') zeros++;
                else ones++;
                if(grid[n-j-1][i] == '0') zeros++;
                else ones++;
                if(grid[n-i-1][n-j-1] == '0') zeros++;
                else ones++;
                ans += min(zeros, ones);
            }
        }
        cout << ans << endl;
    }
    return 0;
}