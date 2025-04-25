#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int N, M; cin >> N >> M;
  vector<int> A(N), B(M);
  for (int& a : A) cin >> a;
  for (int& b : B) cin >> b;

  int low = 1, high = 1e9 + 1;
  while (low < high) {
    int mid = (low + high) / 2;

    int sellers = 0;
    for (int& a : A) {
      if (a <= mid) sellers++;
    }

    int buyers = 0;
    for (int& b : B) {
      if (b >= mid) buyers++;
    }

    if (sellers >= buyers) high = mid;
    else low = mid + 1;
  }

  cout << low << '\n';
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

// https://atcoder.jp/contests/abc312/tasks/abc312_c