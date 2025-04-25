#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	char ans;
	for (int i = 0; i < 3; i++) {
		string s; cin >> s;
		sort(s.begin(), s.end());
		if (s[0] == '?') {
			if (s == "?AB") ans = 'C';
			else if (s == "?BC") ans = 'A';
			else if (s == "?AC") ans = 'B';
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
