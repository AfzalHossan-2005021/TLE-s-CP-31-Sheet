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
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vi sufix_count(n, 1);
        for(int i = n-2; i >= 0; i--){
            if(a[i] == a[i+1]){
                sufix_count[i] = sufix_count[i+1] + 1;
                sufix_count[i+1] = 0;
            }
        }
        int one_trace = 0;
        for(int i = 0; i < n; i++){
            if(sufix_count[i] == 1){
                one_trace = 1;
                break;
            }
        }
        if(one_trace > 0){
            cout << -1 << endl;
        } else {
            for(int i = 0; i < n; i++){
                for(int j = 1; j < sufix_count[i]; j++){
                    cout << i + j + 1 << " ";
                }
                cout << i + 1 << " ";
                i += sufix_count[i] - 1;
            }
            cout << endl;
        }
    }
    return 0;
}