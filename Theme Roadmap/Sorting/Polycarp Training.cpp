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
	int ans = 1;
	for (int& i : v) {
		if (i >= ans) ans++;
	}
	cout << ans-1;
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
