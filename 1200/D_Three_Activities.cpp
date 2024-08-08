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
        vector<pii> a(n), b(n), c(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].f;
            a[i].s = i;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i].f;
            b[i].s = i;
        }
        for(int i = 0; i < n; i++){
            cin >> c[i].f;
            c[i].s = i;
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        int ans = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    if(a[i].s == b[j].s || b[j].s == c[k].s || c[k].s == a[i].s){
                        continue;
                    }
                    else{
                        ans = max(ans, a[i].f + b[j].f + c[k].f);
                    }
                }
            }
        }  
        cout << ans << endl;      
    }
    return 0;
}