#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	sort(v.begin(), v.end());
	if (k == 0) {
		if (v[0] == 1) {
			cout << -1;
		} else {
			cout << v[0] - 1;
		}
		return;
	}
	cout << (v[k-1] == v[k] ? -1 : v[k-1]);
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
