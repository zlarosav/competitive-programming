#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	sort(v.begin(), v.end());
	int ans = 0;
	for (int i = 1; i < n; i+=2) {
		if (v[i] != v[i-1]) ans += v[i] - v[i-1];
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
