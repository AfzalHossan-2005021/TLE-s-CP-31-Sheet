#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int score = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                char c;
                cin >> c;
                if(c == 'X'){
                    if(i == 0 || i == 9 || j == 0 || j == 9){
                        score += 1;
                    }
                    else if(((i == 1 || i == 8) && j > 0 && j < 9) || ((j == 1 || j == 8) && i > 0 && i < 9)){
                        score += 2;
                    }
                    else if(((i == 2 || i == 7) && j > 1 && j < 8) || ((j == 2 || j == 7) && i > 1 && i < 8)){
                        score += 3;
                    }
                    else if(((i == 3 || i == 6) && j > 2 && j < 7) || ((j == 3 || j == 6) && i > 2 && i < 7)){
                        score += 4;
                    }
                    else if(((i == 4 || i == 5) && j > 3 && j < 6) || ((j == 4 || j == 5) && i > 3 && i < 6)){
                        score += 5;
                    }
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}