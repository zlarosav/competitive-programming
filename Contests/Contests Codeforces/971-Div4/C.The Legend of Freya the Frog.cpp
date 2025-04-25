#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int x, y, k; cin >> x >> y >> k;
  int nx = ceil((double) x/k), ny = ceil((double) y/k);
  int result = nx + ny + abs(nx - ny);
  if (nx > ny) result--;
  cout << result << '\n';
}

/*
INPUT
6
9 11 3
0 10 8
1000000 100000 10
100 10 2
0 10 2
10 0 2

OUTPUT
8
4
199999
99
10
9
*/

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

// https://codeforces.com/contest/2009/problem/C