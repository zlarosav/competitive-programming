#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, a, b; cin >> n >> a >> b;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	sort(v.rbegin(), v.rend());
	cout << (v[a-1] - v[a]);
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
