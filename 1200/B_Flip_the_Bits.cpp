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
        string a, b;
        cin >> a >> b;
        vi zero_count(n + 1), one_count(n + 1);
        zero_count[0] = one_count[0] = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '0'){
                zero_count[i + 1] = zero_count[i] + 1;
                one_count[i + 1] = one_count[i];
            } else {
                zero_count[i + 1] = zero_count[i];
                one_count[i + 1] = one_count[i] + 1;
            }
        }
        bool possible = true, flip = false;
        for(int i = n; i > 0; i--){
            if(zero_count[i] == one_count[i]){
                if((flip && a[i - 1] == b[i - 1]) || (!flip && a[i - 1] != b[i - 1])){
                    flip = !flip;
                }
            }
            if(flip){
                if(a[i -1] == b[i - 1]){
                    possible = false;
                    break;
                }
            } else {
                if(a[i - 1] != b[i - 1]){
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}