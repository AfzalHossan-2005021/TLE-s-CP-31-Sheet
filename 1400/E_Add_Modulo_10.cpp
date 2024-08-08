#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, tmp;
        cin >> n;
        vector<int> all, zero_fives;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp % 10 == 0 || tmp % 5 == 0){
                tmp += tmp % 10;
                zero_fives.push_back(tmp);
            } else {
                while(tmp % 10 != 8){
                    tmp += tmp % 10;
                }
                all.push_back(tmp);
            }
        }
        bool flag = true;
        if(all.size() > 0 && zero_fives.size() > 0){
            flag = false;
        } else {
            if(all.size() > 0){
                for(int i = 1; i < all.size(); i++){
                    int diff = all[i] - all[i - 1];
                    if(diff % 20 != 0){
                        flag = false;
                        break;
                    }
                }
            } else {
                for(int i = 1; i < zero_fives.size(); i++){
                    if(zero_fives[i] != zero_fives[i - 1]){
                        flag = false;
                        break;
                    }
                }

            }
        }
        if(flag){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}