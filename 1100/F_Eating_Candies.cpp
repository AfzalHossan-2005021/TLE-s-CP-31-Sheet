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
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int alic_candies = 0, bob_candies = 0, ans = 0;
        int alic = 0, bob = n-1;
        while(alic - 1 <= bob){
            if(alic_candies < bob_candies){
                alic_candies += a[alic];
                alic++;
            } else if(alic_candies > bob_candies){
                bob_candies += a[bob];
                bob--;
            } else {
                ans = alic - bob - 1 + n;
                alic_candies += a[alic];
                bob_candies += a[bob];
                alic++;
                bob--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}