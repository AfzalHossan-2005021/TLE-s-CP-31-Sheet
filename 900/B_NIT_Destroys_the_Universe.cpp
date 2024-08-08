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
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int begin = 0, end = n - 1;
        int count = 0;
        while(begin < n && a[begin] == 0){
            begin++;
        }
        while(end >= 0 && a[end] == 0){
            end--;
        }
        for(int i = begin; i <= end; i++){
            if(a[i] == 0){
                count++;
            }
        }
        if(begin > end){
            cout << 0 << endl;
        }else if(count == 0){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }

    }
    return 0;
}