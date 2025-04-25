#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	for (int& i : a) cin >> i;
	for (int& i : b) cin >> i;

	for (int i = 0; i < n; i++) {
    int new_val = b[0] - a[i];
		if (new_val >= a[i-1]) a[i] = new_val;
	}
	dbg(a);

	cout << (is_sorted(a.begin(), a.end()) ? "YES\n" : "NO\n");
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
