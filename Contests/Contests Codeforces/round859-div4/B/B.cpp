#include <bits/stdc++.h>
 
#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif
 
using namespace std;
 
void solve() {
	int n; cin >> n;
	int mihai = 0, bianca = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x % 2 == 0) mihai += x;
		else bianca += x;
	}
	if (mihai > bianca) cout << "YES\n";
	else cout << "NO\n";
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
