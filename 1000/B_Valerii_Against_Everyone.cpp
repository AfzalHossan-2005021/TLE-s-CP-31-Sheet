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
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        vi count(n, 1);
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]){
                count[i] = count[i-1] + 1;
            }
        }
        int mx = *max_element(count.begin(), count.end());
        if(mx > 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        } 
    }
    return 0;
}