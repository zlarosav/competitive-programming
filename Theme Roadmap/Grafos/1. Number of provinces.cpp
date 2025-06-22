#include <bits/stdc++.h>
using namespace std;

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    int N; cin >> N;
    vector<vector<int>> grid(N, vector<int>(N));
    for (auto& v : grid) for (int& x : v) cin >> x;
    
    vector<bool> vis(N);
    function<void(int)> dfs = [&](int u) {
      vis[u] = 1;
      for (int v = 0; v < N; v++) {
        if (!grid[u][v] || vis[v]) continue;
        dfs(v);
      }
    };

    int comp = 0;
    for (int u = 0; u < N; u++) {
      if (vis[u]) continue;
      dfs(u);
      comp++;
    }

    cout << comp << '\n';
  }

  return 0;
}