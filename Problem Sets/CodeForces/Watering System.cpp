#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n, a, b; cin >> n >> a >> b;
  long long s1; cin >> s1;
  long long s = s1;
  vector<long long> v(n-1);
  for (long long& i : v) {
    cin >> i;
    s += i;
  }
  if (s1 * a >= b * s) {
    cout << 0;
    return;
  }
  sort(v.rbegin(), v.rend());

  long long block = 0;
  for (long long& i : v) {
    s -= i;
    block++;
    if (s1 * a >= b * s) break;
  }
  cout << block;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}