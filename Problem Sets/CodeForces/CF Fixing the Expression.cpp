#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	string s; cin >> s;
	int a = s[0] - '0', b = s[2] - '0';
	if (a < b) cout << a << '<' << b;
	else if (a > b) cout << a << '>' << b;
	else cout << a << '=' << b;
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
