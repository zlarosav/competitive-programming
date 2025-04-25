#include <iostream>
#include <set>

using namespace std;

void solve() {
  int n; cin >> n;
  set<int> a;

  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    a.insert(x);
  }

  cout << ((a.size() == n) ? "YES\n" : "NO\n");
  return;
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

// se recomienda aprender a utilizar el método sort() de la librería algorithm