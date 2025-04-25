#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

long long lcm(long long a, long long b) {
  return ((a * b)/__gcd(a, b));
}

void solve() {
  pair<long long, long long> ans;
  long long mnLCM = INT_MAX;

  auto upt = [&](long long a, long long b) {
    long long mcm = lcm(a, b);
    if (mcm < mnLCM) {
      mnLCM = mcm;
      ans = {a, b};
    }
  };

  long long N; cin >> N;
  for (long long div = 1; div * div <= N; div++) {
    if (N % div == 0) {
      upt(div, N-div);
      if (div != N/div && div != 1) {
        upt(N/div, N - N/div);
      }
    }
  }

  cout << ans.first << ' ' << ans.second << '\n';
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
