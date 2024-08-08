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
        cin.ignore();
        string s;
        cin >> s;
        int op_count1 = 0;
        int i = s.size()-1;
        while(i >= 0){
            if(s[i] == '0') break;
            i--;
            op_count1++;
        }
        int j = i - 1;
        while(j >= 0){
            if(s[j] == '0' || s[j] == '5') break;
            j--;
            op_count1++;
        }
        
        int op_count2 = 0;
        i = s.size()-1;
        while(i >= 0){
            if(s[i] == '5') break;
            i--;
            op_count2++;
        }
        j = i-1;
        while(j >= 0){
            if(s[j] == '2' || s[j] == '7') break;
            j--;
            op_count2++;
        }
        
        cout << min(op_count1, op_count2) << endl;
    }
    return 0;
}