#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin>>n;
  vector<int> r(n);
  for(int& i : r) cin>>i;
  sort(r.begin(), r.end());
  int cn = 0;
  long long acumulado = 0;
  for (int i = 0; i < n; i++) {
    if (acumulado < r[i]) {
      cn++;
      acumulado += r[i];
    }
  }
  cout << cn;
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