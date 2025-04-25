#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  vector<pair<int, int>> coords;

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      char x; cin >> x;
      v[i][j] = x;
      if (x == '#') coords.push_back({i, j});
    }
  }

  int mx = 0;
  for (int ix=0; ix<n; ix++) {
    for (int jy=0; jy<m; jy++) {
      
    }
  }
  cout << mx << '\n';
  
  dbg(coords);

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