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
        string a, b;
        cin >> a >> b;
        string s1, s2;
        if(a.size() < b.size()){
            s1 = b;
            s2 = a;
        } else {
            s1 = a;
            s2 = b;
        }
        int mx = 0;
        for(int i = 0; i < s2.size(); i++){
            for(int j = s2.size()-i; j >= 0; j--){
                string s = s2.substr(i, j);
                if(s1.find(s) != string::npos){
                    mx = max(mx, (int)s.size());
                }
            }
        }
        cout << a.size() + b.size() - 2 * mx << endl;
    }
    return 0;
}