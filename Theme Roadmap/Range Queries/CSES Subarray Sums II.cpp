#include <bits/stdc++.h>
#include <vector>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, x; cin >> n >> x;
	vector<int> v(n);
	for (int& i : v) cin >> i;

	vector<long long> p(n);
	p[0] = v[0];
	for (int i = 1; i < n; i++) {
		p[i] = p[i-1] + v[i];
	}
	
	//auto get = [&](int l, int r) 
	long long ans = 0;
	map<long long, int> freq;
	freq[0] = 1;
	for (int i = 0; i < n; i++) {
		ans += freq[p[i] - x];
		freq[p[i]]++;
	}
	cout << ans << '\n';
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
