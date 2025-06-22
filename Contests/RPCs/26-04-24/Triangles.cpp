#include <bits/stdc++.h>

using namespace std;

void solve() {
  int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  int esquinas = 0;
  if ((x1 == 0 && y1 == 0) || (x1 == 0 && y1 == 2024) || (x1 == 2024 && y1 == 0) || (x1 == 2024 && y1 == 2024)) esquinas++;
  if ((x2 == 0 && y2 == 0) || (x2 == 0 && y2 == 2024) || (x2 == 2024 && y2 == 0) || (x2 == 2024 && y2 == 2024)) esquinas++;

  if (esquinas == 2) {
    cout << 0 << '\n';
  } else if (esquinas == 1) {
    cout << 1 << '\n';
  } else {
    cout << 2 << '\n';
  }
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