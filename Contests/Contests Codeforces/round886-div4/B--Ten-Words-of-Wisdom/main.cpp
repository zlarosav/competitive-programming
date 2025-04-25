#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	int ans = 1;
	int mx = INT_MIN;
	for (int i = 1; i <= n; i++) {
		int a, b; cin >> a >> b;
		if (a > 10) continue;
		if (mx < b) {
			mx = b;
			ans = i;
		}
	}
	cout << ans << '\n';
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
