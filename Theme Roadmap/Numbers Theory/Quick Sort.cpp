#include <bits/stdc++.h>
#include <vector>

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
	int currSort = 1;
	for (int& i : v) {
		if (i == currSort) {
			currSort++;
		}
	}
	int noSort = n - (currSort - 1);
	cout << ceil(1.0*noSort/k) << '\n';
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
