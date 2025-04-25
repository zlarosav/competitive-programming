#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long n; cin >> n;
  long long ans = n + (2 * (n / 2)) + (2 * (n / 3));
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}