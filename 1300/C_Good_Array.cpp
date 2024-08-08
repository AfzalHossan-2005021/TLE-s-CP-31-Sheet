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
    int n;
    ll sum = 0LL;
    cin >> n;
    vector<pii> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].f;
        a[i].s = i+1;
        sum += (ll)a[i].f;
    }
    sort(a.begin(), a.end());
    vi ans, tmp;
    for(int i = 0; i < n; i++){
        tmp.push_back(a[i].f);
    }
    for(int i = 0; i < n; i++){
        ll tmp_sum = sum - (ll)a[i].f;
        int l = 0, r = n-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(tmp[mid] < tmp_sum - tmp[mid]){
                l = mid + 1;
            } else if(tmp[mid] > tmp_sum - tmp[mid]){
                r = mid - 1;
            } else {
                if(mid == i){
                    if(mid < n-1) {
                        if(tmp[mid] == tmp[mid+1]) ans.push_back(a[i].s);
                    } else if(mid > 0) {
                        if(tmp[mid] == tmp[mid-1]) ans.push_back(a[i].s);
                    }
                } else {
                    ans.push_back(a[i].s);
                }
                break;
            }
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}