#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	vector<int> exV(v.begin(), v.end());
	sort(v.rbegin(), v.rend());
	for (int i : exV) {
		cout << (v[0] != i ? i-v[0] : i-v[1]) << ' ';
	}
	cout << '\n';
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

// // https://codeforces.com/problemset/problem/1760/C