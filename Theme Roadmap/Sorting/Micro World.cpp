#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	sort(v.rbegin(), v.rend());
	
	int elmnds = 0;
	int i = 0, j = 1;
	while (i < n && j < n) {
		if (v[i] == v[j]) {
			j++;
			continue;
		}

		if (v[i] <= v[j] + k) {
			elmnds++;
			j++;
		} else {
			i++;
			if (i == j) j++;
		}
	}
	cout << n - elmnds;
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
