#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  int pos = 1, acumulado = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      int e; cin >> e;
      if (pos==1 || pos==9) acumulado += e;
      if (pos==3 || pos==7) acumulado -= e;
      pos++;
    }
  }
  cout << abs(acumulado) << '\n';
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

// https://blitzcoding.com/problem-detail/66