#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  int med = n/2;
  if (med*2 == n) cout << ((v[med-1] + v[med]) / 2.0);
  else cout << v[med];

  return 0;
}