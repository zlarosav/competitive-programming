#include <bits/stdc++.h>
#include <cctype>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	string s; cin >> s; 
	string capitalS = "";
	for (char ch : s) capitalS += tolower(ch);
	cout << (capitalS == "yes" ? "YES\n" : "NO\n");
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
