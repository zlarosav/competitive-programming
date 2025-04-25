#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int N, M; cin >> N >> M;
  vector<vector<int>> grid(N, vector<int>(M));
  queue<int> rotten;

  int currId = 0, total = 0;
  map<pair<int, int>, int> getPoint2d;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int curr; cin >> curr; 
      grid[i][j] = curr;
      if (curr != 0) total++;

      getPoint2d[{i, j}] = currId;
      // Si está malograda serán nuestros puntos "start" para el bfs
      if (curr == 2) rotten.push(currId); 
      currId++;
    }
  }
  int sanas = total - rotten.size();
  if (rotten.empty() && sanas > 0) {
    cout << -1;
    return;
  }

  if (sanas == 0) {
    cout << 0;
    return;
  }

  vector<vector<int>> adj(N*M); // idx-0
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (grid[i][j] == 0) continue;
      
      int u = getPoint2d[{i, j}]; // Para aplanar a 1D
      // Obtenemos sus vecinos en 4 direcciones
      // Arriba
      if (i > 0 && grid[i-1][j] != 0) adj[u].push_back( getPoint2d[{i-1, j}] );
      // Abajo 
      if (i+1 < N && grid[i+1][j] != 0) adj[u].push_back( getPoint2d[{i+1, j}] );
      // Izquierda
      if (j > 0 && grid[i][j-1] != 0) adj[u].push_back( getPoint2d[{i, j-1}] );
      // Derecha
      if (j+1 < M && grid[i][j+1] != 0) adj[u].push_back( getPoint2d[{i, j+1}] );
      //dbg(i, j);
    }
  }
  //dbg(adj);
  
  // Haremos un bfs por cada naranja podrida
  vector<int> vis(N*M);
  int levels = 0; // infected debe ser igual al total

  while (!rotten.empty()) {
    int sz = rotten.size();
    // Procesamos todos los nodos de un nivel antes de pasar al siguiente
    while (sz--) {
      int u = rotten.front();
      vis[u] = 1;
      rotten.pop();

      for (auto v : adj[u]) {
        if (vis[v]) continue;
        vis[v] = 1;
        rotten.push(v);
      }
    }

    levels++;
  }

  int infected = accumulate(vis.begin(), vis.end(), 0);
  if (infected < total) {
    cout << -1;
    return;
  }
  cout << levels - 1;
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