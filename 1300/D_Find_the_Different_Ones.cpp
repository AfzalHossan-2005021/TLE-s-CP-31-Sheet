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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vi changes;
        for(int i=1; i<n; i++){
            if(a[i] != a[i-1]){
                changes.push_back(i);
            }
        }
        int q;
        cin >> q;
        while(q--){
            int l, r;
            cin >> l >> r;
            int low = 0, high = changes.size()-1;
            bool flag = false;
            while(low <= high){
                int mid = low + (high - low)/2;
                if(changes[mid] < l){
                    low = mid + 1;
                }else if(changes[mid] >= r){
                    high = mid - 1;
                }else{
                    cout << changes[mid] << " " << changes[mid]+1 << endl;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                cout << -1 << " " << -1 << endl;
            }
        }
        cout << endl;
    }
    return 0;
}