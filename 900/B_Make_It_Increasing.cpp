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
        int n, count = 0, flag = 0;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(a[n-1] < n-1) {cout << -1 << endl; continue;}
        for(int i = n-1; i > 0; i--){
            while(a[i-1] >= a[i] ){
                a[i-1] /= 2;
                count++;
                if(a[i-1] == 0) break;
            }
            if(i > 1 && a[i-1] <= 0){
                flag = 1;
                break;
            }
        }
        if(flag) cout << -1 << endl;
        else cout << count << endl;
    }
    return 0;
}