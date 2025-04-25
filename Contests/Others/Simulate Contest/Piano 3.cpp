#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int q; cin >> q;
  int fatiga = 0;
  int L = 0, R = 0;
  bool firstL = true;
  bool firstR = true;
  while (q--) {
    int A; cin >> A;
    char S; cin >> S;
    if (firstL && S == 'L') {
      firstL = false;
      L = A;
      continue;
    }
    if (firstR && S == 'R') {
      firstR = false;
      R = A;
      continue;
    }

    if (S == 'L') {
      fatiga += abs(A-L);
      L = A;
    } else if (S == 'R') {
      fatiga += abs(A-R);
      R = A;
    }
  }
  cout << fatiga;
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

// https://atcoder.jp/contests/abc369/tasks/abc369_b