#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  int sumas[n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x; cin >> x;
      if (i == 0) sumas[j] = x;
      else sumas[j] += x;
    }
  }
  for (auto& sum : sumas) cout << sum << " ";
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

// https://omegaup.com/arena/LLAMACUP-2024-1/practice/#problems/pb-Sumando