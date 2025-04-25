#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, k, p; cin >> n >> k >> p;
	vector<int> a(n);
	if (k == 0) {
		cout << "0\n";
		return;
	}
	int signo = (k < 0 ? -1 : 1);
	int cnt = ceil((1.0 * k) / (signo * p));
	if (cnt > n || cnt < 1) {
		cout << "-1\n";
		return;
	}
	cout << cnt << '\n';
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
