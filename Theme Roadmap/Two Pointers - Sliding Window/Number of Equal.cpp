#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; long long m; cin >> n >> m;
  
  map<int, long long> mpA, mpB;
  for (int i = 0; i < n; i++) {
    int x; cin >> x; 
    mpA[x]++;
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x; 
    mpB[x]++;
  }

  vector<pair<int, long long>> a(mpA.begin(), mpA.end()), b(mpB.begin(), mpB.end());
  int l = 0, r = 0;
  long long total = 0;

  while (l < a.size() && r < b.size()) {
    if (a[l].first == b[r].first) {
      total += a[l].second * b[r].second;
      l++;
      r++;
    } else if (a[l].first < b[r].first) {
      l++;
    } else {
      r++;
    }
  }

  cout << total << '\n';
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
