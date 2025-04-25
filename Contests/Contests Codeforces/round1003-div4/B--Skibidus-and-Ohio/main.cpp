#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == s[i+1]) {
			cout << "1\n";
			return;
		}
	}
	cout << s.size() << '\n';
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
