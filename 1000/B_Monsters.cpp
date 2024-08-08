#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool comparator(pii a, pii b){
    if(a.s == b.s){
        return a.f < b.f;
    }
    return a.s > b.s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<pii> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].s;
            a[i].f = i;
        }
        for(int i = 0; i < n; i++){
            a[i].s = a[i].s % k;
            if(a[i].s <= 0){
                a[i].s += k;
            }
        }
        sort(a.begin(), a.end(), comparator);
        for(int i = 0; i < n; i++){
            cout << a[i].f + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}