#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n; 
  vector<int> v(n);
  for (auto& i : v) cin >> i;
  int mult; cin >> mult;
  for (auto& i : v) {
    if (i % mult == 0) cout << i << " ";
    else cout << "X ";
  };
  
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

// https://omegaup.com/arena/UNJFSC2024/practice/#problems/Filtrando-multiplos