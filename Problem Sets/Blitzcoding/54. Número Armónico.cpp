#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string num; cin >> num;
	if (num.size() == 1) { cout << num << '\n'; return; }

  long long max_producto = 1;
	for (char& c : num) max_producto *= (c - '0');

  for (int i = 0; i < num.size(); i++) {
		if (num[i] == '0') continue;
		
		string candidato = num; candidato[i]--;
		for (int j = i + 1; j < num.size(); j++) candidato[j] = '9';
		
		long long producto = 1;
		for (char& c : candidato) {
			if (c != '0') producto *= (c - '0');
		}
		max_producto = max(producto, max_producto);
  }

  cout << max_producto << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
		solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/54