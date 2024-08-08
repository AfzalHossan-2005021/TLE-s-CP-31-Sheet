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
        cin >> n;
        int p = n * (n-1) / 2;
        vi a(p);
        for(int i = 0; i < p; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int inc = n;
        vi ans;
        for(int i = 0; i < p; i+=inc){
            ans.push_back(a[i]);
            inc--;
        }
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << 1000000000 << endl;
    }
    return 0;
}