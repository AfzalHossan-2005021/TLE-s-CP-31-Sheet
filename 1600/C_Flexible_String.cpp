#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vc vector<char>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

vector<char> unique_chars;
vector<vc> chosen_chars;

int len;

void choose_chars(vc &tmp, int remain){
    if(tmp.size() == len){
        chosen_chars.push_back(tmp);
        return;
    }
    if(remain == -1){
        return;
    }
    tmp.push_back(unique_chars[remain]);
    choose_chars(tmp, remain-1);
    tmp.pop_back();
    choose_chars(tmp, remain-1);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        unique_chars.clear();
        chosen_chars.clear();
        int n, k;
        string a, b;
        cin >> n >> k >> a >> b;
        set<char> unique_chars_a;
        for(int i = 0; i < n; i++){
            unique_chars_a.insert(a[i]);
        }
        for(auto c : unique_chars_a){
            unique_chars.push_back(c);
        }
        vc tmp; ll ans = 0;
        len = min(k, (int)unique_chars.size());
        choose_chars(tmp, unique_chars.size()-1);
        for(int i = 0; i < chosen_chars.size(); i++){
            tmp = chosen_chars[i];
            string tmp_a = a;
            for(int i = 0; i < n; i++){
                if(find(tmp.begin(), tmp.end(), tmp_a[i]) != tmp.end()){
                    tmp_a[i] = b[i];
                }
            }
            vi diff(n, 0);
            for(int i = 0; i < n; i++){
                if(tmp_a[i] == b[i]){
                    diff[i] = 1;
                }
            }
            ll tmp_ans = diff[0];
            for(int i = 1; i < n; i++){
                if(diff[i] == 1){
                    diff[i] += diff[i-1];
                }
                tmp_ans += diff[i];
            }
            ans = max(ans, tmp_ans);
        }
        cout << ans << endl;
    }
    return 0;
}