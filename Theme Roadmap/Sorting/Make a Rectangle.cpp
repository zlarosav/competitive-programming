#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	map<long long, int> mp;
	for (int i = 0; i < n; i++) {
		long long x; cin >> x;
		mp[x]++;
	}
	
	int lados = 0;
	long long prod4l = 0;
	long long prod = 1;
	for (auto it = mp.rbegin(); it != mp.rend(); it++) {
		if ((*it).second < 2) continue;
			
		long long lado = (*it).first;
		if (prod4l == 0 && (*it).second >= 4) {
			prod4l = lado * lado;
		} 
		
		prod *= lado;
		lados++;

		if (lados >= 2) {
			cout << max(prod, prod4l);
			return;
		}
	}
	
	cout << prod4l;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1; 
	//cin >> t;
	//cin.ignore();
	while (t--) {
		solve();
	}

	return 0;
}
