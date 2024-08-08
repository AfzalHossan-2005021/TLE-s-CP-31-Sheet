#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool comp(pii a, pii b){
    if(a.f == b.f) return a.s > b.s;
    return a.f > b.f;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pii> a(n);
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            a[i].f = 0;
            for(int j = 0; j < k; j++){
                int x;
                cin >> x;
                a[i].f = max(a[i].f, x - j + 1);
            }
            a[i].s = a[i].f + k;
        }
        sort(a.begin(), a.end(), comp);
        int min_power = a[0].f;
        for(int i = 1; i < n; i++){
            if(a[i].s < a[i-1].f){
                int diff = a[i].s - a[i].f;
                a[i].s = a[i-1].f;
                a[i].f = a[i].s - diff;
            }
            min_power = a[i].f;
        }
        cout << min_power << endl;
    }
    return 0;
}