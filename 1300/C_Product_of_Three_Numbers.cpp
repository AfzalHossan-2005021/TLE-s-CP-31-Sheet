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
        bool flag = false;
        int cubic_root = cbrt(n);
        for(int i = 2; i <= cubic_root; i++){
            if(n % i == 0){
                int two_product = n / i;
                for(int j = i + 1; j * j <= two_product; j++){
                    if(two_product % j == 0){
                        int k = two_product / j;
                        if(k != j && k != i){
                            cout << "YES" << endl;
                            cout << i << " " << j << " " << k << endl;
                            flag = true;
                            break;
                        }                       
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(!flag){
            cout << "NO" << endl;
        }
    }
    return 0;
}