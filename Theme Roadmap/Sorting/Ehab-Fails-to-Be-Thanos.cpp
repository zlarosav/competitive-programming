#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	vector<long long> v(2*n);
	long long total = 0;
	for (long long& i : v) {
		cin >> i;
		total += i;
	}
	sort(v.begin(), v.end());
	long long mitad = accumulate(v.begin(), v.begin() + n, 0);
	if (total == 2*mitad) {
		cout << -1;
		return;
	}
	for (long long& i : v) cout << i << ' ';
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
