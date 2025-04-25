#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)

void solve() {
  vector<int> v(3);
  for (int& i : v) cin >> i;
  sort(v.begin(), v.end());
  cout << v[1]-v[0]+v[2]-v[1] << '\n';
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

// https://blitzcoding.com/problem-detail/42