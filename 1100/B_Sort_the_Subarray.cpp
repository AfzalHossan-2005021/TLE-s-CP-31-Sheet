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
        vi a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vi d(n+1);
        d[0] = 0;
        for(int i = 1; i <= n; i++){
            if(a[i-1] != b[i-1]){
                d[i] = d[i-1] + 1;
            } else {
                d[i] = d[i-1];
            }
        }
        vi c(n, 1);
        int begin, end, mx = 0;
        for(int i = 1; i < n; i++){
            if(b[i] >= b[i-1]){
                c[i] = c[i-1] + 1;
            }
            if(c[i] > mx){
                int p = i + 1;
                int q = i - c[i] + 1;
                if(d[p]-d[q] > 0){
                    mx = c[i];
                    end = p;
                    begin = q + 1;
                }
            }
        }
        cout << begin << " " << end << endl;
    }
    return 0;
}