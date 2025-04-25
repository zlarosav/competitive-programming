#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int h, w; cin >> h >> w;
  int Si, Sj; cin >> Si >> Sj;
  Si--; Sj--;
  vector<vector<char>> S(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> S[i][j];
    }
  }
  string movs; cin >> movs;
  for (char& mov : movs) {
    if (mov == 'U' && Si-1 >= 0 && S[Si-1][Sj] != '#') Si--;
    if (mov == 'D' && Si+1 < h && S[Si+1][Sj] != '#') Si++;
    if (mov == 'L' && Sj-1 >= 0 && S[Si][Sj-1] != '#') Sj--;
    if (mov == 'R' && Sj+1 < w && S[Si][Sj+1] != '#') Sj++;
  }
  cout << Si+1 << ' ' << Sj+1;
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

// https://codeforces.com/contest/2038/problem/K