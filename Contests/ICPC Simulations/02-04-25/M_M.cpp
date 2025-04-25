#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

ll lcm(ll a, ll b) {
	return (a*b)/__gcd(a, b);
}

void solve() {
	ll N; cin >> N;
	pair<int, int> ans;
	ll mnLCM = INT_MAX;

	auto upt =  [&](ll a, ll b) {
		ll mcm = lcm(a, b);
		if (mcm < mnLCM) {
			mnLCM = mcm;
			ans = {a, b};
		}
	};

	for (ll div = 1; div * div <= N; div++) {
		if (N % div == 0) {
			upt(div, N - div);
			if (div != 1 && div != N/div) {
				upt(N/div, N - N/div);
			}
		}	
	}

	cout << ans.first << ' ' << ans.second << '\n';
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