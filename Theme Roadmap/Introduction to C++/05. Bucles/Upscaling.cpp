#include <iostream>

using namespace std;

void solve() {
  int n; cin >> n;
  int size = 2 * n;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if ((i / 2 + j / 2) % 2 == 0) {
        cout << '#';
      } else {
        cout << '.';
      }
    }
    cout << endl;
  }
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

//https://codeforces.com/problemset/problem/1950/B