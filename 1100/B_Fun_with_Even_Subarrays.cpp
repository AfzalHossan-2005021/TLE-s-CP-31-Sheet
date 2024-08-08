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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vi last_elem_count(n);
        last_elem_count[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            if(a[i] == a[n-1]){
                last_elem_count[i] = last_elem_count[i+1] + 1;
            } else {
                last_elem_count[i] = last_elem_count[i+1];
            }
        }
        int k = 1, op_count = 0;
        while(n-k > 0){
            if(a[n-k-1] == a[n-1]){
                k++;
            } else {
                op_count ++;
                k *= 2;
            }
        }
        cout << op_count << endl;
    }
}