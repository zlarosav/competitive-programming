#include <iostream>
using namespace std;

void solve() {
  int C, O, P; cin >> C >> O >> P;
  if (O == P) { cout << "Orgullo y Prejuicio"; return; }
  cout << (C-O > C-P ? "Orgullo" : "Prejuicio");
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