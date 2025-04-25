#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int A, B; cin >> A >> B;
  if (A == B) {
    cout << 1;
  } else if ((A+B) % 2 == 0) {
    cout << 3;
  } else if ((A+B) % 2 != 0) {
    cout << 2;
  }
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

// https://atcoder.jp/contests/abc369/tasks/abc369_a