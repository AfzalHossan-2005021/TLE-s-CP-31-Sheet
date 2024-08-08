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
        int n, m, tmp;
        cin >> n >> m;
        int neg_count = 0;
        int abs_min = INT_MAX;
        int sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> tmp;
                sum += abs(tmp);
                if(tmp < 0){
                    neg_count++;
                }
                abs_min = min(abs_min, abs(tmp));
            }
        }
        if(neg_count % 2 == 0){
            cout << sum << endl;
        } else {
            cout << sum - 2 * abs_min << endl;
        }
    }
    return 0;
}