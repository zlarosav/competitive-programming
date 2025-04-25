#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string n; cin >> n;
  long long len = n.size();
  if (len == 1) {
    cout << 0 << '\n';
    return;
  }

  long long cnt = 0, zerosLeft = 0;
  for (long long i = 0; i < len; i++) {
    if (n[i] == '0') {
      zerosLeft++;
    } else {
      long long curr = zerosLeft + 1;
      cnt = max(cnt, curr);
    }
  }
  cout << len - cnt << '\n';
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