#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  // n: amigos / m: tipos
  int n, m; cin >> n >> m;
  map<int, int> mp;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    mp[x]++;
  }
  int count = 0;
  for (int i=0; i<n; i++) {
    int fr; cin >> fr;
    if (mp[fr] > 0) {
      mp[fr]--;
      count++;
    }
  }
  cout << count << '\n';
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

// http://codeforces.com/gym/104426/problem/H