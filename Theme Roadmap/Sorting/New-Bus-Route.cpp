#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int& i : a) cin >> i;
	sort(a.begin(), a.end());
	map<long long, int> mp;
	for (int i = 0; i < n-1; i++) {
		long long dif = abs(a[i] - a[i+1]);
		mp[dif]++;
	}
	cout << (*mp.begin()).first << ' ' << (*mp.begin()).second;
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
