#include <bits/stdc++.h>
#include <vector>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	vector<string> v(8);
	for (string& i : v) cin >> i;
	string ans = "";
	for (string i : v) {
		for (char ch : i) {
			if (ch == '.') continue;
			ans += ch;
		}
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
