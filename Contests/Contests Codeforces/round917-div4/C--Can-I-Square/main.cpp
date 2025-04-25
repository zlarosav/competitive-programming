#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	long long n; cin >> n;
	long long suma = 0;
	for (long long i = 0; i < n; i++) {
		long long x; cin >> x;
		suma += x;
	}
	cout << ((long long) sqrt(suma) * sqrt(suma) == suma ? "YES\n" : "NO\n");
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
