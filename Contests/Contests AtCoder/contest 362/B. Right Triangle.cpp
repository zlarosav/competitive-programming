#include <bits/stdc++.h>

using namespace std;

void solve() {
  int i = 0, x, y, s[3];
  vector<pair<int, int>> coord;
  while (cin >> x >> y) {
    coord.push_back({ x, y });
    i++;
  }

  for (int i = 0; i < 3; i++) {
    int targetX = (coord[i].first-coord[(i+1)%3].first);
    int targetY = (coord[i].second-coord[(i+1)%3].second);
    s[i] = targetX * targetX + targetY * targetY;
  }
  
  int max = *max_element(s, s+3);
  cout << ((2*max == s[0] + s[1] + s[2]) ? "Yes" : "No") << '\n';
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

// https://atcoder.jp/contests/abc362/tasks/abc362_b