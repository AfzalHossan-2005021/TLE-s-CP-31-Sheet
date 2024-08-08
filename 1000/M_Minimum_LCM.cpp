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
        int a = 2;
        int lim = sqrt(n);
        while(n % a != 0){
            if(a > lim){
                a = n;
                break;
            }
            a++;
        }
        a = n / a;
        int b = n - a;
        cout << a << " " << b << endl;
    }
    return 0;
}