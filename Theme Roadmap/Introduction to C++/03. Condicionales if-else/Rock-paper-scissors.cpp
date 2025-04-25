#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string F, M, S; cin >> F >> M >> S;
  if ((F=="rock"&&M==S&&M=="scissors")||(F=="paper"&&M==S&&M=="rock")||(F=="scissors"&&M==S&&M=="paper")) {
    cout << 'F'; return;
  } else if ((F==S&&M=="rock"&&S=="scissors")||(F==S&&M=="paper"&&S=="rock")||(F==S&&M=="scissors"&&S=="paper")) {
    cout << 'M'; return;
  } else if ((F==M&&S=="rock"&&M=="scissors")||(F==M&&S=="paper"&&M=="rock")||(F==M&&S=="scissors"&&M=="paper")) {
    cout << 'S'; return;
  } else {
    cout << '?'; return;
  }
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

// https://codeforces.com/contest/48/problem/A