#include <bits/stdc++.h>

using namespace std;

void solve() {
  string adn; cin >> adn;
  int i = 1, n = adn.size(), maxSize = 1, curr = 1;
  char target = adn[0];
  while(i <= n) {
    if (adn[i] == target) {
      curr++;
    } else {
      target = adn[i];
      maxSize = max(maxSize, curr);
      curr = 1;
    }
    i++;
  }
  cout << maxSize;
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

// https://cses.fi/problemset/task/1069/