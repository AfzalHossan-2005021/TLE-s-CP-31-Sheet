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
        string str;
        cin >> str;
        int start = 0, end = n-1;
        while((str[start] == '0' && str[end] == '1') || (str[start] == '1' && str[end] == '0')){
            start++;
            end--;
            if(start >= end){
                break;
            }
        }
        cout << end - start + 1 << endl;
    }
    return 0;
}