#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

string mult(string n) {
  int producto = 1;
  for (char c : n) {
    producto *= (c - '0');
  }
  return to_string(producto);
}

void solve() {
  string n; cin >> n;
  int count = 0;
  while (n.size() > 1) {
    n = mult(n);
    count++;
  }
  cout << count << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}