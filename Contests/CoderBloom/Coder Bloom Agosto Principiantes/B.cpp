#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int N, K; cin >> N >> K;
  vector<int> corredoras;
  for (int i = 0; i < N; i++) {
    int a, b; cin >> a >> b;
    corredoras.push_back(a-b);
  }
  //   0       1      2   
  // {40000, 50000, 50000, 50000, 70000}
  //   ^^      ^^     ^^
  sort(corredoras.begin(), corredoras.end());
  dbg(corredoras);
  cout << corredoras[K-1];
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