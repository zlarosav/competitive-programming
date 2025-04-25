#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  set<pair<int, int>> visited;
  pair<int, int> pos = {0, 0};
  visited.insert(pos);
  for (char& c : s) {
    if (c == 'R') pos.first++;
    if (c == 'L') pos.first--;
    if (c == 'U') pos.second++;
    if (c == 'D') pos.second--;
    if (visited.count(pos)) { cout << "Yes"; return; } else visited.insert(pos);
  }
  cout << "No";
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

// https://atcoder.jp/contests/abc291/tasks/abc291_c?lang=en