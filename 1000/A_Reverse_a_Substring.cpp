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
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = s.size() - 1;
    while(l < r){
        if(s[l] > s[r]){
            break;
        } else {
            if(s[l] < s[l+1] || s[r] < s[r-1]){
                l++;
            } else if(s[r] > s[r-1] || s[l] > s[l+1]){
                r--;
            } else {
                l++;
                r--;
            }
        }
    }
    if(l < r){
        cout << "YES" << endl;
        cout << l + 1 << " " << r + 1 << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}