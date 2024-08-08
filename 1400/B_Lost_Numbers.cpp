#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define endl "\n"

int main(){
    vi prod(4);
    for(int i = 1; i <= 4; i++){
        cout << "? " << 1 << " " << i+1 << endl;
        cout << flush;
        cin >> prod[i-1];
    }
    vi num = {4, 8, 15,16, 23, 42};
    set<int> s;
    for(int i = 0; i < 6; i++){
        s.insert(num[i]);
        for(int j = 0; j < 6; j++){
            if(s.find(num[j]) != s.end()) continue;
            if(num[i]*num[j] != prod[0]) continue;
            s.insert(num[j]);
            for(int k = 0; k < 6; k++){
                if(s.find(num[k]) != s.end()) continue;
                if(num[i]*num[k] != prod[1]) continue;
                s.insert(num[k]);
                for(int l = 0; l < 6; l++){
                    if(s.find(num[l]) != s.end()) continue;
                    if(num[i]*num[l] != prod[2]) continue;
                    s.insert(num[l]);
                    for(int m = 0; m < 6; m++){
                        if(s.find(num[m]) != s.end()) continue;
                        if(num[i]*num[m] != prod[3]) continue;
                        s.insert(num[m]);
                        cout << "! " << num[i] << " " << num[j] << " " << num[k] << " " << num[l] << " " << num[m] << " ";
                        for(int n = 0; n < 6; n++){
                            if(s.find(num[n]) == s.end()){
                                cout << num[n] << endl;
                                break;
                            }
                        }
                        return 0;
                    }
                    s.erase(num[l]);
                }
                s.erase(num[k]);
            }
            s.erase(num[j]);
        }
        s.erase(num[i]);
    }
    return 0;
}