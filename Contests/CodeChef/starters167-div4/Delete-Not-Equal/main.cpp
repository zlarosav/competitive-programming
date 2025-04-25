#include <bits/stdc++.h>
#include <vector>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	string binario; cin >> binario;
	for (char ch : binario) {
		if (binario[0] != ch) {
			cout << "1\n";
			return;
		}			
	}
	cout << n << '\n';
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

