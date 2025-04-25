#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int N, T; cin >> N >> T;
  int menosdeT = 0, enT = 0;
  for (int i = 0; i < N; i++) {
    int num; cin >> num;
    if (num < T) menosdeT++;
    else if (num == T) enT++;
  }
  cout << menosdeT << ' ' << enT;
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