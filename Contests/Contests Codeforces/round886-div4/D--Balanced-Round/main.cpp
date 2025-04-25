#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	sort(v.begin(), v.end());
	int mx = 0, curr = 1;
	for (int i = 1; i < n; i++) {
		if (abs(v[i] - v[i-1]) > k) {
			mx = max(mx, curr);
			curr = 1;
		} else {
			curr++;
		}
	}
	cout << n - max(mx, curr) << '\n';
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
