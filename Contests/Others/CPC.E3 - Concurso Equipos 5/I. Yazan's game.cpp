#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int r, c; cin >> r >> c;
  vector<vector<int>> v(r, vector<int>(c));
  int count0 = 0;
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      int e; cin >> e;
      v[i][j] = e;
      if (e == 0) count0++;
    }
  }
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      int temp = 0;
      if (i!=0 && j!=0 && v[i-1][j-1] == 0) temp++;
      if (i!=0 && v[i-1][j] == 0) temp++;
      if (i!=0 && j!=c-1 && v[i-1][j+1] == 0) temp++;
      if (j!=0 && v[i][j-1] == 0) temp++;
      if (j!=c-1 && v[i][j+1] == 0) temp++;
      if (i!=r-1 && j!=0 && v[i+1][j-1] == 0) temp++;
      if (i!=r-1 && v[i+1][j] == 0) temp++;
      if (i!=r-1 && j!=c-1 && v[i+1][j+1] == 0) temp++;

      if (temp == count0) {
        cout << "WIN"; return;
      }
    }
  }
  cout << "LOSE";
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

// http://codeforces.com/gym/104426/problem/I