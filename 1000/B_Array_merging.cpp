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
        int max_val = 2 * n;
        vi max_cons_a(max_val + 1, 0), max_cons_b(max_val + 1, 0);
        int elem = a[0];
        int cons_count = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]){
                cons_count++;
            }
            else{
                max_cons_a[elem] = max(max_cons_a[elem], cons_count);
                elem = a[i];
                cons_count = 1;
            }
        }
        max_cons_a[elem] = max(max_cons_a[elem], cons_count);

        elem = b[0];
        cons_count = 1;
        for(int i = 1; i < n; i++){
            if(b[i] == b[i-1]){
                cons_count++;
            }
            else{
                max_cons_b[elem] = max(max_cons_b[elem], cons_count);
                elem = b[i];
                cons_count = 1;
            }
        }
        max_cons_b[elem] = max(max_cons_b[elem], cons_count);
        
        int max_seq = 0;
        for(int i = 1; i <= max_val; i++){
            max_seq = max(max_seq, max_cons_a[i] + max_cons_b[i]);
        }
        cout << max_seq << endl;
    }
    return 0;
}