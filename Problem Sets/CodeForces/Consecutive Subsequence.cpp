#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;

  //int mx = *max_element(v.begin(), v.end());
  map<int, int> dp; // f(x) = Cantidad de numeros consecutivos hasta x

  int k = 0, final = 0;
  for (int i = 0; i < n; i++) {
    int x = v[i];
    dp[x] = dp[x-1] + 1;
    if (k < dp[x]) {
      k = dp[x];
      final = x;
    }
  }

  vector<int> ans;
	for (int i = n - 1; i >= 0; i--) {
		if (v[i] == final) {
			ans.push_back(i);
			final--;
		}
	}
	reverse(ans.begin(), ans.end());

  cout << k << '\n';
  for (int i : ans) cout << i+1 << ' ';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/contest/977/problem/F