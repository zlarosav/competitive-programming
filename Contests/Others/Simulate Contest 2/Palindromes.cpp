#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string w; cin >> w;
  vector<int> freq(26);
  for (char x : w) {
    freq[x - 'a']++;
  }
  int impares = -1;
  for (int& f : freq) {
    if (f % 2 != 0) impares++;
  }
  if (impares == -1) {
    cout << w.size();
    return;
  }
  cout << w.size() - impares;
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