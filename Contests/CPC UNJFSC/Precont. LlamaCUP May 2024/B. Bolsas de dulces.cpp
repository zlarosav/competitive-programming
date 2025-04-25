#include <bits/stdc++.h>

using namespace std;

int solve() {
  int n, x; cin >> n >> x;
  return n * x;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t, ans = 0; cin >> t;
  while (t--) {
    ans += solve();
  }
  cout << ans << endl;

  return 0;
}

// https://omegaup.com/arena/LLAMACUP-2024-1/practice/#problems/Bolsas-de-dulces