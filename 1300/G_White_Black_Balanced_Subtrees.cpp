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
        vi a(n+1), white(n+1, 0), black(n+1, 0);
        for(int i = 2; i <= n; i++){
            cin >> a[i];
        }
        string color;
        cin >> color;
        for(int i = 1; i <= n; i++){
            if(color[i-1] == 'W'){
                white[i]++;
                int child = i;
                while(child != 1){
                    white[a[child]] += white[i];
                    child = a[child];
                }
            } else {
                black[i]++;
                int child = i;
                while(child != 1){
                    black[a[child]] += black[i];
                    child = a[child];
                }
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(white[i] == black[i]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}