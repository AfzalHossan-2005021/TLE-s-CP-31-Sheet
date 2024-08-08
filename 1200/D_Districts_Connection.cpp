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
        set<int> st;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }
        if(st.size() == 1){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int opponent = -1;
            vi same;
            for(int i = 1; i < n; i++){
                if(a[i] != a[0]){
                    cout << 1 << " " << i + 1 << endl;
                    if(opponent == -1){
                        opponent = i + 1;
                    }
                } else {
                    same.push_back(i + 1);
                }
            }
            for(int i = 0; i < same.size(); i++){
                cout << opponent << " " << same[i] << endl;
            }
        }
    }
    return 0;
}