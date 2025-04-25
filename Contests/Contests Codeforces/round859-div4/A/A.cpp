#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;
	if (a + b == c) {
		cout << "+\n";
	} else {
		cout << "-\n";
	}
	//dbg(a, b, c);
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
