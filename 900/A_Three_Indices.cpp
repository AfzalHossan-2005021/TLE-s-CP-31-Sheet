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
        vi diff(n, 0);
        for(int i = 1; i < n; i++){
            diff[i] = a[i] - a[i - 1];
        }
        int i = 1;
        while(i < n){
            if(diff[i] > 0){
                break;
            }
            i++;
        }
        int p = i;
        if(i < n){
            while(i < n){
                if(diff[i] < 0){
                    break;
                }
                i++;
            }
            if(i < n){
                int q = i;
                int r = i + 1;
                cout << "YES" << endl;
                cout << p << " " << q << " " << r << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}