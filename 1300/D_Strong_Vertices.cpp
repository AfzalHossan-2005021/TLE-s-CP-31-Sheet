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
        vi a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            a[i] -= b[i];
        }
        vi strong_vertices;
        int mx = *max_element(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if(a[i] == mx){
                strong_vertices.push_back(i+1);
            }
        }
        cout << strong_vertices.size() << endl;
        for(int i = 0; i < strong_vertices.size(); i++){
            cout << strong_vertices[i] << " ";
        }
        cout << endl;
    }
    return 0;
}