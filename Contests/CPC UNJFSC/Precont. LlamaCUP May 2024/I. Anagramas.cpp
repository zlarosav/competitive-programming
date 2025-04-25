#include <bits/stdc++.h>

using namespace std;

void solve() {
  string a, b; cin >> a >> b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (a == b) cout << "si" << endl;
  else cout << "no" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://omegaup.com/arena/LLAMACUP-2024-1/practice/#problems/Anagramas