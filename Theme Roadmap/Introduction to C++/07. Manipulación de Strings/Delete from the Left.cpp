#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string a, b; cin >> a >> b;
  if (a == b) { cout << 0; return; }
  if (a[a.size()-1] != b[b.size()-1]) {
    cout << a.size() + b.size(); return;
  }

  int count = 0;
  int n = a.size(), m = b.size();
  while (n-1-count >= 0 && m-1-count >= 0 && a[n-1-count] == b[m-1-count]) {
    count++;
  }
  cout << a.size() + b.size() - 2*count;
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

// https://codeforces.com/contest/1005/problem/B