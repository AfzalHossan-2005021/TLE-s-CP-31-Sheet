#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n, x, sum = 0, mx = INT_MIN, mn = INT_MAX;
        cin >> n;
        vector<ll> pos, neg, zero, ans;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x > 0) pos.push_back(x);
            else if(x < 0) neg.push_back(x);
            else zero.push_back(x);
            mx = max(mx, x);
            mn = min(mn, x);
        }
        if(mx-mn <= 0){
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        sort(pos.begin(), pos.end());
        sort(neg.rbegin(), neg.rend());
        while(pos.size() && neg.size()){
            if(abs(sum + pos.back()) > abs(sum + neg.back())){
                sum += neg.back();
                ans.push_back(neg.back());
                neg.pop_back();
            } else {
                sum += pos.back();
                ans.push_back(pos.back());
                pos.pop_back();
            }
        }
        while(pos.size()){
            ans.push_back(pos.back());
            pos.pop_back();
        }
        while(neg.size()){
            ans.push_back(neg.back());
            neg.pop_back();
        }
        while(zero.size()){
            ans.push_back(0);
            zero.pop_back();
        }
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}