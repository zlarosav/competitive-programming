#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

long long factorial(long long n) {
  long long ans = 1;
  for (long long i = 2; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

void solve() {
  cout << factorial(4);
  dbg(4);
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