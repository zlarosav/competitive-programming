#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, d; cin >> n >> d;
  map<int, int> freq;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    freq[x]++;
  }
  if (n == 1) {
    cout << 0;
    return;
  }
  
  int mx = 0;
  vector<pair<int, int>> v(freq.begin(), freq.end());
  for (int i = 0; i < v.size(); i++) {
    int curr = 0;
    for (int j = i; j < v.size() && v[j].first - v[i].first <= d; j++) {
      curr += v[j].second;
    }
    mx = max(curr, mx);
  }
  cout << n - mx;
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
