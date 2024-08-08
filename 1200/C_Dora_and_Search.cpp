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
        int curr_mn = 1, curr_mx = n;
        int i = 0, j = n - 1;
        while(i < j){
            if(a[i] == curr_mn){
                i++;
                curr_mn++;
            }
            else if(a[j] == curr_mn){
                j--;
                curr_mn++;
            }
            else if(a[i] == curr_mx){
                i++;
                curr_mx--;
            }
            else if(a[j] == curr_mx){
                j--;
                curr_mx--;
            }
            else break;
        }
        if(i >= j) cout << -1 << endl;
        else cout << i+1 << " " << j+1 << endl;
    }
    return 0;
}