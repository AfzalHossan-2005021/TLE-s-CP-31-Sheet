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
        int n, k;
        cin >> n >> k;
        vector<int> arr(26, 0);
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            arr[c-'a']++;
        }
        int i = 0;
        while(k > 0 && i < 26){
            if(arr[i] % 2 != 0){
                arr[i]--;
                k--;
            }
            i++;
        }
        int odd_count = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i] % 2 != 0){
                odd_count++;
            }
        }
        if(odd_count > 1){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}