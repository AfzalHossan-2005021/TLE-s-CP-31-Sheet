#include<bits/stdc++.h>

using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool comp(pii &a, pii &b){
    if(a.f == b.f) return a.s < b.s;
    return a.f < b.f;
}

int main(){
    int n;
    cin >> n;
    vector<pii> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].f >> a[i].s;
    }
    sort(a.begin(), a.end(), comp);
    bool flag = false;
    int tv1 = a[0].s, tv2 = -1;
    for(int i = 1; i < n; i++){
        if(a[i].f <= tv1 && a[i].f <= tv2){
            flag = true;
            break;
        } else if(a[i].f > tv1){
            tv1 = a[i].s;
        } else if(a[i].f > tv2){
            tv2 = a[i].s;
        }
    }
    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}