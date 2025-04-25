#include <bits/stdc++.h>
#include <climits>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	int m1 = INT_MAX, m2 = INT_MAX, m3 = INT_MAX;
	while (n--) {
		int m; cin >> m;
		string strS; cin >> strS; 
		if (strS == "01") m1 = min(m1, m);
		else if (strS == "10") m2 = min(m2, m);
		else if (strS == "11") m3 = min(m3, m);
		else if (strS == "00") continue;
	}
	
	if ((m1 == INT_MAX || m2 == INT_MAX) && m3 == INT_MAX) {
		cout << "-1\n";
	} else if ((m1 == INT_MAX || m2 == INT_MAX) && m3 != INT_MAX) {
		cout << m3 << '\n';
	} else {
		cout << min(m1 + m2, m3) << '\n';
	}
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
