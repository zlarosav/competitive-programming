#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, a, b; cin >> n >> a >> b;
  vector<pair<int, int>> v(n);
  int pos = 0;
  while (pos < n) {
    int x; cin >> x;
    v[pos].first = x;
    if (pos < a) {
      v[pos].second = 1; 
    } else {
      v[pos].second = 2; 
    }
    pos++;
  }
  sort(v.begin(), v.end());
  for (auto x : v) cout << x.second << ' ';

  return 0;
}

// https://codeforces.com/contest/421/problem/A