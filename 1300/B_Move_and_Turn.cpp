#include <iostream>

using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    if(t & 1){
        int n = (t+1)/2;
        cout << 2 * n *(n+1) << endl;
    } else {
        int n = t/2;
        cout << (n+1) * (n+1) << endl;
    }
    return 0;
}