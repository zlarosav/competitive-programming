#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	sort(v.rbegin(), v.rend());
	int ans = 0;
	for (int& i : v) {
		if (m > 0) {
			ans++;
			m -= i;
			if (m <= 0) break;
		}
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1; 
	//cin >> t;
	//cin.ignore();
	while (t--) {
		solve();
	}

	return 0;
}

