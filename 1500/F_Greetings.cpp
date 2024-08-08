#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"

vi v;

ll marge(int s1, int t1, int s2, int t2){
    int s = s1, t = t2;
    ll sum = 0;
    vi tmp;
    while(s1 <= t1 && s2 <= t2){
        if(v[s1] > v[s2]){
            sum += t1 - s1 + 1;
            tmp.push_back(v[s2]);
            s2++;
        } else {
            tmp.push_back(v[s1]);
            s1++;
        }
    }
    for(int i = s1; i <= t1; i++){
        tmp.push_back(v[i]);
    }
    for(int i = s2; i <= t2; i++){
        tmp.push_back(v[i]);
    }
    for(int i = s; i <= t; i++){
        v[i] = tmp[i-s];
    }
    return sum;
}

ll divide(int s, int t){
    if(s >= t) return 0;
    int m = (s+t)/2;
    ll sum = divide(s, m) + divide(m+1, t);
    sum += marge(s, m, m+1, t);
    return sum;
}

ll count_inversion(){
    int s = 0, t = v.size() - 1;
    return divide(s, t);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n;
        vector<pii> pos(n);
        for(int i = 0; i < n; i++){
            cin >> pos[i].second >> pos[i].first;
        }
        sort(pos.begin(), pos.end());
        v.clear();
        v.resize(n);
        for(int i = 0; i < n; i++){
            v[i] = pos[i].second;
        }
        cout << count_inversion() << endl;
    }
    return 0;
}