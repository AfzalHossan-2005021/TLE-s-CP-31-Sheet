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
        int n;
        string s;
        cin >> n >> s;
        vector<vi> pos(26);
        vector<pii> cnt(26);
        for(int i = 0; i < 26; i++){
            cnt[i].f = 0;
            cnt[i].s = i;
        }
        for(int i = 0; i < n; i++){
            pos[s[i]-'a'].push_back(i);
            cnt[s[i]-'a'].f++;
        }
        sort(cnt.rbegin(), cnt.rend());
        int opt_len = 1, mn_op = (n << 1);
        for(int i = 0; i < 26; i++){
            if(n % (i+1) == 0){
                int op_cnt = 0;
                int len = n / (i+1);
                for(int j = 0; j <= i; j++){
                    op_cnt += abs(cnt[j].f - len);
                }
                for(int j = i+1; j < 26; j++){
                    op_cnt += cnt[j].f;
                }
                if(op_cnt < mn_op){
                    mn_op = op_cnt;
                    opt_len = len;
                }
            }
        }
        int char_cnt = n / opt_len;
        stack<int> st;
        for(int i = 0; i < char_cnt; i++){
            while(pos[cnt[i].s].size() > opt_len){
                st.push(pos[cnt[i].s].back());
                pos[cnt[i].s].pop_back();
            }
        }
        for(int i = char_cnt; i < 26; i++){
            while(!pos[cnt[i].s].empty()){
                st.push(pos[cnt[i].s].back());
                pos[cnt[i].s].pop_back();
            }
        }
        for(int i = 0; i < char_cnt; i++){
            while(pos[cnt[i].s].size() < opt_len){
                pos[cnt[i].s].push_back(st.top());
                st.pop();
            }
        }
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < pos[i].size(); j++){
                s[pos[i][j]] = i + 'a';
            }
        }
        cout << mn_op / 2 << endl;
        cout << s << endl;

    }
    return 0;
}