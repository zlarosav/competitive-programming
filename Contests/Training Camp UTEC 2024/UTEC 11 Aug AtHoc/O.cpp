#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) v[0][i] = 1;
  for (int i=1; i<n; i++) v[i][0] = 1;
  for (int i=1; i<n; i++) {
    for (int j=1; j<n; j++) {
      v[i][j] = v[i-1][j] + v[i][j-1];
    }
  }
  
  cout << v[n-1][n-1];
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