#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int A, B, C, N; cin >> A >> B >> C >> N;
  int x = (N - A)/C;
  while (x < 1e9) {
    int y = N - A - C*x;
    if (y % B == 0) {
      //cout << "SI, Alicia deberá comer " << x << " veces y beber " << abs(y/B) << " veces."; return;
      cout << "SI"; return;
    } else {
      x++;
    }
  }
  cout << "NO";
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