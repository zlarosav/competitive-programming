#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<int> v(n), freq(n+1);
  for (int& i : v) cin >> i;
  for (int i = n-1; i >= 0; i--) {
    freq[v[i]]++;
    if (freq[v[i]] > 1) {
      cout << i+1 << '\n';
      return;
    }
  }
  cout << "0\n";
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