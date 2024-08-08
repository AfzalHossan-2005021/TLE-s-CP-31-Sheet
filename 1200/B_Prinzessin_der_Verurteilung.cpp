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
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        string ans;
        for(int i = 0; i < 26; i++){
            string tmp1 = string(1, 'a'+i);
            int pos1 = s.find(tmp1, 0);
            if(pos1 == -1){
                if(ans.size() == 0){
                    ans = tmp1;
                }else{
                    if(ans.size() > tmp1.size()){
                        ans = tmp1;
                    }else if(ans.size() == tmp1.size()){
                        ans = min(ans, tmp1);
                    }
                }
            }else{
                for(int j = 0; j < 26; j++){
                    string tmp2 = tmp1 + string(1, 'a'+j);
                    int pos2 = s.find(tmp2, pos1);
                    if(pos2 == -1){
                        if(ans.size() == 0){
                            ans = tmp2;
                        }else{
                            if(ans.size() > tmp2.size()){
                                ans = tmp2;
                            }else if(ans.size() == tmp2.size()){
                                ans = min(ans, tmp2);
                            }
                        }
                    } else {
                        for(int k = 0; k < 26; k++){
                            string tmp3 = tmp2 + string(1, 'a'+k);
                            int pos3 = s.find(tmp3, pos2);
                            if(pos3 == -1){
                                if(ans.size() == 0){
                                    ans = tmp3;
                                }else{
                                    if(ans.size() > tmp3.size()){
                                        ans = tmp3;
                                    }else if(ans.size() == tmp3.size()){
                                        ans = min(ans, tmp3);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}