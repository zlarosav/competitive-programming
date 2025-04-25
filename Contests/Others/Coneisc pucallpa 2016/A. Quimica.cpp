#include <bits/stdc++.h>

using namespace std;

const int MXN = 20;
vector<vector<int>> bits(1 << MXN);
vector<bool> f(1 << MXN);

void init() {
  for (int mask = 0; mask < (1 << MXN); mask++){
    for (int i = 0; i < MXN; i++){
      if (mask & (1 << i)){
        bits[mask].push_back(i);
      }
    }
  }
}

void solve() {
  int n, m; cin >> n >> m;
  
  fill(f.begin(), f.end(), true);
  for(int i = 0; i < m; i++){
    int x, y; cin >> x >> y; x--, y--;
    int mask = (1 << x) ^ (1 << y);
    f[mask] = false;
  }
  int ans = 0;
  for (int mask = 0; mask < (1 << n); mask++){
    for (int bit : bits[mask]){
      f[mask] = f[mask] & f[mask ^ (1 << bit)];
    }
    ans += f[mask];
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  init();

  int t = 1;
  cin >> t;
  while (t--){
    solve();
  }

	return 0;
}