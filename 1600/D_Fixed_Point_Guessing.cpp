#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	assert(n != -1);
	int l = 1, r = n;
	while (l < r) {
	    int mid = (l + r) / 2;
	    cout << '?' << ' ' << l << ' ' << mid << endl;
	    int x, cnt = 0;
	    for (int i = 0; i < mid - l + 1; i++) {
	        cin >> x;
	        assert(x != -1);
	        if (l <= x && x <= mid) {cnt++;}
	    }
	    if (!(cnt & 1)) {l = mid + 1;}
	    else {r = mid;}
	}
	cout << '!' << ' ' << l << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}