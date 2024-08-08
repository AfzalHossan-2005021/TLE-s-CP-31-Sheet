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
        int ans = -1;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            if(tmp != i){
                ans &= tmp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}