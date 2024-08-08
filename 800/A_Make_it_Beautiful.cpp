#include<bits/stdc++.h>

using namespace std;

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
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        if(arr[0] == arr[1]){
            if(arr[0] != arr[n-1]){
                cout << "YES" << endl;
                cout << arr[n-1] << " ";
                for(int i = 0; i < n-1; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}