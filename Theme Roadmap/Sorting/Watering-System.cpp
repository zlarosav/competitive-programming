#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, A, B; cin >> n >> A >> B;
	int firstSize; cin >> firstSize;
	int totalSum = firstSize;
	vector<int> v(n-1); 
	for (int& i : v) {
		cin >> i;
		totalSum += i;
	}
	if (1LL * firstSize * A >= 1LL * B * totalSum) {
		cout << 0;
		return;
	}
	sort(v.rbegin(), v.rend());
	int block = 0;
	for (int& i : v) {
		totalSum -= i;
		block++;
		if (1LL * firstSize * A >= 1LL * B * totalSum) {
			cout << block;
			return;
		}
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
