#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	map<char, char> lang = {{'a', 'V'}, {'b', 'C'}, {'c', 'C'}, {'d', 'C'}, {'e', 'V'}};
	reverse(s.begin(), s.end());
	// Si está al revés, es posible "VC" y "CVC"
	string ans = "";
	for (int i = 0; i < n; i++) {
		ans += s[i];
		ans += s[i+1];
		if (lang[s[i]] == 'V') {
			i++;
		} else {
			ans += s[i+2];
			i+=2;
		}
		ans += '.';
	}
	ans = ans.substr(0, ans.size()-1);
	reverse(ans.begin(), ans.end());
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
