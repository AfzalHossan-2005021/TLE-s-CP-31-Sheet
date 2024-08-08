#include<bits/stdc++.h>

using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool comp(pair<pii, int> &a, pair<pii, int> &b){
    if(a.f.f == b.f.f) return a.f.s > b.f.s;
    return a.f.f < b.f.f;
}

int main(){
    int n;
    cin >> n;
    vector<pair<pii, int>> segs(n);
    for(int i = 0; i < n; i++){
        cin >> segs[i].f.f >> segs[i].f.s;
        segs[i].s = i;
    }
    sort(segs.begin(), segs.end(), comp);
    bool flag = false;
    for(int i = 1; i < n; i++){
        if(segs[i].f.s <= segs[i-1].f.s){
            cout << segs[i].s+1 << " " << segs[i-1].s+1 << endl;
            flag = true;
            break;
        }
    }
    if(!flag) cout << -1 << " " << -1 << endl;
    return 0;
}