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
        sort(a.begin(), a.end());
        vi elem_count(n, 1);
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]){
                elem_count[i] = elem_count[i-1] + 1;
            }
        }
        int max_count = *max_element(elem_count.begin(), elem_count.end());
        int op_count = n - max_count;
        while(max_count < n){
            max_count*=2;
            op_count++;
        }
        cout << op_count << endl;
    }
    return 0;
}