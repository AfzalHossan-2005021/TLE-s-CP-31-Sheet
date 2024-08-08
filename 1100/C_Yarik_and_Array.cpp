#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int max_sub_array_sum(vi a, int begin, int end){
    int ans = INT_MIN;
    int mx_sum = a[begin];
    for(int i = 1; i < end - begin + 1; i++){
        mx_sum = max(mx_sum + a[begin + i], a[begin + i]);
        ans = max(ans, mx_sum);
    }
    return ans;
}

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
        if(n == 1){
            cout << a[0] << endl;
        } else {
            vi parity(n);
            for(int i = 1; i < n; i++){
                if(abs(a[i] % 2) == abs(a[i-1] % 2)){
                    parity[i] = 0;
                } else {
                    parity[i] = 1;
                }
            }
            int begin = -1, end = -1, i = -1;
            int ans = *max_element(a.begin(), a.end());
            while(begin < n && end < n){
                i = end + 1;
                while(i < n && parity[i] == 0){
                    i++;
                }
                if(i == n){
                    break;
                }
                begin = i - 1;
                while(i < n && parity[i] == 1){
                    i++;
                }
                end = i - 1;
                if(begin < n && end < n){
                    ans = max(ans, max_sub_array_sum(a, begin, end));
                }
            }
            cout << ans << endl;            
        }
    }
    return 0;
}