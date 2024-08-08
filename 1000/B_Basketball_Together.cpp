#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, d;
    cin >> n >> d;
    vi p(n);
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.rbegin(), p.rend());
    int fwd = 0, bwd = n - 1;
    int ans = 0;
    d++;
    while(fwd <= bwd){
        int player_count;
        if(d % p[fwd] == 0){
            player_count = d / p[fwd];
        } else {
            player_count = d / p[fwd] + 1;
        }
        fwd++;
        bwd -= player_count - 1;
        if(fwd - 1 >= bwd + 1){
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}