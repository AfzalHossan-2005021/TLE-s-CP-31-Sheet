#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, b, kx, ky, qx, qy, fork_count = 0;
        cin >> a >> b >> kx >> ky >> qx >> qy;
        vector<pii> king_attact, queen_attact;
        king_attact.push_back({kx+a, ky+b});
        king_attact.push_back({kx+a, ky-b});
        king_attact.push_back({kx-a, ky+b});
        king_attact.push_back({kx-a, ky-b});
        queen_attact.push_back({qx+a, qy+b});
        queen_attact.push_back({qx+a, qy-b});
        queen_attact.push_back({qx-a, qy+b});
        queen_attact.push_back({qx-a, qy-b});
        if(a != b){
            king_attact.push_back({kx+b, ky+a});
            king_attact.push_back({kx+b, ky-a});
            king_attact.push_back({kx-b, ky+a});
            king_attact.push_back({kx-b, ky-a});
            queen_attact.push_back({qx+b, qy+a});
            queen_attact.push_back({qx+b, qy-a});
            queen_attact.push_back({qx-b, qy+a});
            queen_attact.push_back({qx-b, qy-a});
        }

        // for(int i = 0; i < king_attact.size(); i++){
        //     cout << "<" << king_attact[i].f << "," << king_attact[i].s << ">" << " " ;
        // }
        // cout << endl;	
        // for(int i = 0; i < queen_attact.size(); i++){
        //     cout << "<" << queen_attact[i].f << "," << queen_attact[i].s << ">" << " " ;
        // }
        // cout << endl;

        for(int i = 0; i < king_attact.size(); i++){
            for(int j = 0; j < queen_attact.size(); j++){
                if(king_attact[i].f == queen_attact[j].f && king_attact[i].s == queen_attact[j].s){
                    // cout << "<" << king_attact[i].f << "," << king_attact[i].s << ">" << " " << "<" << queen_attact[j].f << "," << queen_attact[j].s << ">" << endl;
                    fork_count++;
                }
            }
        }
        cout << fork_count << endl;
    }
    return 0;
}