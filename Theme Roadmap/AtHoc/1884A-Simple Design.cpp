#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  if (k == 1) {
    cout << n << '\n';
    return;
  }
  int sumaCifras = 1;
  while (sumaCifras % k != 0) {
    sumaCifras = 0;
    string num = to_string(n);
    for (char ch : num) sumaCifras += (ch - '0');
    n++;
  }
  cout << n - 1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// 