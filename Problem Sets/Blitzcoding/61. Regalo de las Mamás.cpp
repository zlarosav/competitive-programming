#include <bits/stdc++.h>

using namespace std;

void solve() {
	int mom, dinero; cin >> mom >> dinero;
	int total = mom * dinero;
	int n; cin >> n;
	int mayorPrecio = 0;
	for (int i = 0; i < n; i++) {
		int e; cin >> e;
		if (e <= total && mayorPrecio < e) {
			mayorPrecio = e;
		}
	}
	cout << mayorPrecio << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}

// https://blitzcoding.com/problem-detail/61