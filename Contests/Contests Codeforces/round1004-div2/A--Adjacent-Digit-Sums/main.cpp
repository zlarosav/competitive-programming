#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int x, y; cin >> x >> y;
	if (x == y) {
		cout << "No\n";
		return;
	}

	if (x < y) {
		cout << (y == x + 1 ? "Yes\n" : "No\n");
		return;
	}

	cout << ((x + 1 - y) % 9 == 0 ? "Yes\n" : "No\n");
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
