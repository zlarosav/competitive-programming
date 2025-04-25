#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N;
  while (cin >> N) {
    int cuadrados = 0;
    for (int i = 1; i <= N; i++) {
      cuadrados += i * i;
    }
    int rectangulos = (N * (N + 1) / 2) * (N * (N + 1) / 2);

    cout << cuadrados << " " << rectangulos << endl;
  }
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
