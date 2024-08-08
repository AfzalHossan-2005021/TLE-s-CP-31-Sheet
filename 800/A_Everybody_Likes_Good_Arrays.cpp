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
        int n, curr, prev;
        cin >> n >> prev;
        vector<int> arr(n, 0);
        for(int i = 1; i < n; i++){
            cin >> curr;
            if(curr % 2 == prev % 2){
                arr[i] = arr[i-1]+1;
                arr[i-1] = 0;
            }
            prev = curr;
        }
        cout << accumulate(arr.begin(), arr.end(), 0) << endl;
    }
    return 0;
}