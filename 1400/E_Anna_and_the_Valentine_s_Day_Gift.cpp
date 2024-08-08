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
        int n, m, tmp, total_digit = 0;
        cin >> n >> m;
        vector<int> ls_zero(n, 0);
        for(int i = 0; i < n; i++){
            cin >> tmp;
            total_digit += log10(tmp) + 1;
            while(tmp){
                if(tmp % 10 == 0){
                    ls_zero[i]++;
                    tmp /= 10;
                } else {
                    break;
                }
            }
        }
        sort(ls_zero.rbegin(), ls_zero.rend());
        for(int i = 0; i < n; i+=2){
            total_digit -= ls_zero[i];
        }
        if(total_digit <= m){
            cout << "Anna" << endl;
        } else {
            cout << "Sasha" << endl;
        }
    }
    return 0;
}