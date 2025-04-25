#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  set<char> dulces;
  for (int i = 0; i < n; i++) {
    char l; cin >> l;
    dulces.insert(l);
  }

  int repetidos = dulces.size();
  cout << min(repetidos, n/2) << endl;
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
