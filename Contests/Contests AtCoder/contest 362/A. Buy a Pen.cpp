#include <bits/stdc++.h>

using namespace std;

void solve() {
  int values[3];
  for (int& v : values) cin >> v;
  string color; cin >> color;
  if (color == "Red") values[0] = 101;
  if (color == "Green") values[1] = 101;
  if (color == "Blue") values[2] = 101;
  cout << *min_element(values, values+3) << '\n';
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

// https://atcoder.jp/contests/abc362/tasks/abc362_a