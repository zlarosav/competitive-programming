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
  for (int i=0; i<n; i++) {
    v[i] = i+1;
  }
  int pos = 0, saltos = 1;
  for (int i=0; i<n-1; i++) {
    pos += saltos;
    cout << v[pos % n] << ' ';
    saltos++;
  }
  cout << '\n';
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

// https://codeforces.com/contest/46/problem/A
// https://blitzcoding.com/problem-detail/74