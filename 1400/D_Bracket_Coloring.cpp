#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        stack<int> opening, closing;
        char tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            if(tmp == '('){
                opening.push(i);
            } else {
                closing.push(i);
            }
        }
        if(opening.size() == closing.size()){
            vi color(n);
            int color1 = 0, color2 = 0;
            while(opening.size() > 0 && closing.size() > 0){
                int open = opening.top();
                opening.pop();
                int close = closing.top();
                closing.pop();
                if(open < close){
                    color[open] = 1;
                    color[close] = 1;
                    color1++;
                } else {
                    color[open] = 2;
                    color[close] = 2;
                    color2++;
                }
            }
            if(!color1 || !color2){
                cout << 1 << endl;
                for(int i = 0; i < n; i++){
                    cout << 1 << " ";
                }
            } else {
                cout << 2 << endl;
                for(int i = 0; i < n; i++){
                    cout << color[i] << " ";
                }
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
        
    }
    return 0;
}