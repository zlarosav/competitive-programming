#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	int curr = 0, mx = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x == 0) {
			curr++;
		} else {
			mx = max(curr, mx);
			curr = 0;
		}
	}
	cout << max(curr, mx) << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1; 
	cin >> t;
	//cin.ignore();
	while (t--) {
		solve();
	}

	return 0;
}
