#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  vector<pair<int, int>> v(n);
  
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v[i].first = x;
    v[i].second = i;
  }
  sort(v.begin(), v.end());

  vector<int> deltas(n);
  map<int, vector<int>> diff;
  for (int i = 1; i < n; i++) {
    int curr = v[i].first - v[i-1].fir--st;
    diff[curr].push_back(i-1);
    deltas[i-1] = curr;
  }
  sort(deltas.rbegin(), deltas.rend());
  vector<pair<int, vector<int>>> p(diff.rbegin(), diff.rend());
  for(int i = 0; i < (int) p.size(); i++){
    reverse(p[i].second.begin(), p[i].second.end());
  }
  
  dbg(p);
  int len = 0;
  for (int i = 0; i < k - 1; i++) {
    int curr = deltas[i];
    // p[curr] es un vector ordenado ascendentemente
    p[curr][i]
    // 0 / 0 1 2 / 0
  }

  dbg(v);
  dbg(deltas);
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