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
        cin >> n;
        int mx_cnt = 0;
        pii ans = {0, n};
        int i = 0;
        while(i < n){
            vi temp;
            int x, start = i;
            while(true){
                cin >> x;
                i++;
                if(x == 0 || i >= n){
                    if(x != 0){
                        temp.push_back(x);
                    }
                    int neg_cnt = 0;
                    vi two_cnt(temp.size()+1, 0);
                    for(int j = 0; j < temp.size(); j++){
                        if(temp[j] < 0){
                            neg_cnt++;
                        }
                        if(abs(temp[j]) == 2){
                            two_cnt[j+1] = two_cnt[j] + 1;
                        } else {
                            two_cnt[j+1] = two_cnt[j];
                        }
                    }
                    if(neg_cnt & 1){
                        int first_neg = -1, lst_neg = -1;
                        for(int k = 0; k < temp.size(); k++){
                            if(temp[k] < 0){
                                first_neg = k+1;
                                break;
                            }
                        }
                        for(int k = temp.size()-1; k >= 0; k--){
                            if(temp[k] < 0){
                                lst_neg = k;
                                break;
                            }
                        }
                        int left = two_cnt[temp.size()] - two_cnt[first_neg];
                        int right = two_cnt[lst_neg];
                        if(left > right){
                            if(left > mx_cnt){
                                mx_cnt = left;
                                ans = {start + first_neg , n - (start + temp.size())};
                            }
                        } else {
                            if(right > mx_cnt){
                                mx_cnt = right;
                                ans = {start, n - (start + lst_neg)};
                            }
                        }
                    } else if(two_cnt[temp.size()] > mx_cnt){
                        mx_cnt = two_cnt[temp.size()];
                        ans = {start, n - (start+temp.size())};
                    }
                    break;
                }
                temp.push_back(x);
            }
        }
        cout << ans.f << " " << ans.s << endl;
    }
    return 0;
}