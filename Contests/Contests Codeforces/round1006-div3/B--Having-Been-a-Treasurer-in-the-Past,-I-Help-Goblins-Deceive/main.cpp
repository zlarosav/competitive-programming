#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	
	//  -           _
	int cntUp = 0, cntDown = 0;
	for (char ch : s) {
		if (ch == '-') cntUp++;
		else cntDown++;
	}

	if (n < 3 || cntUp < 2 || cntDown < 1) {
		cout << "0\n";
		return;
	}
    
  int left = cntUp/2, right = cntUp-left;
  cout << 1LL * cntDown * left * right << '\n';
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
