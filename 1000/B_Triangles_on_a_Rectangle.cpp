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
        ll w, h, tmp;
        cin >> w >> h;
        ll x1_min, x1_max, x2_min, x2_max, y1_min, y1_max, y2_min, y2_max;
        ll x1_count, x2_count, y1_count, y2_count;
        cin >> x1_count;
        cin >> x1_min;
        for(int i = 1; i < x1_count -1; i++){
            cin >> tmp;
        }
        cin >> x1_max;
        cin >> x2_count;
        cin >> x2_min;
        for(int i = 1; i < x2_count -1; i++){
            cin >> tmp;
        }
        cin >> x2_max;
        cin >> y1_count;
        cin >> y1_min;
        for(int i = 1; i < y1_count -1; i++){
            cin >> tmp;
        }
        cin >> y1_max;
        cin >> y2_count;
        cin >> y2_min;
        for(int i = 1; i < y2_count -1; i++){
            cin >> tmp;
        }
        cin >> y2_max;
        ll x_max_area = max(x1_max - x1_min, x2_max - x2_min) * h;
        ll y_max_area = max(y1_max - y1_min, y2_max - y2_min) * w;
        cout << max(x_max_area, y_max_area) << endl;
    }
    return 0;
}