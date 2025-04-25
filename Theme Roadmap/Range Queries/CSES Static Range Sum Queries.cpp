#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, q; cin >> n >> q;
	vector<int> v(n);
	for (int& i : v) cin >> i;

	vector<long long> p(n);
	p[0] = v[0];
	for (int i = 1; i < n; i++) {
		p[i] = p[i-1] + v[i];
	}

	while (q--) {
		int a, b; cin >> a >> b; a--; b--;
		long long ans = p[b];
		if (a-1 >= 0) ans -= p[a-1];
		cout << ans << '\n';
	}
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
