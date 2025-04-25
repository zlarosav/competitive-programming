#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

int tri(int x) {
  return (x*(x+1))/2;
}

void solve() {
  int n; cin >> n;
  int L = 1, R = 32; R = 1000;
  while (L < R) {
    int mid = (L + R + 1)/2;
    if (tri(mid) <= n) L = mid;
    else R = mid - 1;
  }
  cout << (tri(L) == n ? "YES" : "NO") << ' ' << tri(L) << '\n'; 
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

// https://codeforces.com/contest/47/problem/A
// https://blitzcoding.com/problem-detail/76