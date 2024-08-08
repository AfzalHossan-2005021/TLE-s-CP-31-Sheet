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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);
        a[0] = 1;
        for(int i = 1; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        int a_ptr = 0, b_ptr = 0;
        while(a_ptr < n && b_ptr < n){
            if(a[a_ptr] < b[b_ptr]){
                b_ptr++;
            }
            a_ptr++;
        }
        cout << n - min(a_ptr, b_ptr) << endl;
    }
    return 0;
}