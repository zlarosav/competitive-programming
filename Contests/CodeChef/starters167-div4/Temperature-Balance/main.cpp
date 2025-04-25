#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	vector<long long> nums(n);
	for (long long& i : nums) cin >> i;
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += abs(nums[i]);
		nums[i+1] += nums[i];
	}
	cout << ans << '\n';
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
