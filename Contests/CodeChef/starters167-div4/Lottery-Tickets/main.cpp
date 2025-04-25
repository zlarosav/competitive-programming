#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

const int MAX = 1e6;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	int chef = v[0];
	sort(v.begin(), v.end());
	int posChef = lower_bound(v.begin(), v.end(), chef) - v.begin();
	int lsup = chef == v.back() ? MAX : (v[posChef] + v[posChef+1])/2;
	int linf = chef == v.front() ? 1 : (v[posChef-1] + v[posChef] + 1)/2;
	cout << lsup - linf + 1 << '\n';
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
