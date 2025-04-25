#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n; 
  int max = n, counter = 0;
  while (n != 1) {
    if ((n & 1) == 0) {
      n /= 2;
    } else {
      n = 3*n + 1;
    }
    if (max < n) max = n;
    counter++;
  }
  cout << counter << " " << max;
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

// https://omegaup.com/arena/LLAMACUP-2024-1/practice/#problems/El-problema-3n1