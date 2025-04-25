#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  vector<int> goals(m);
  vector<int> meals(m);
  for (auto& i : goals) cin >> i;

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      int x; cin >> x;
      meals[j] += x;
    }
  }

  for (int i=0; i<m; i++) {
    if (goals[i] > meals[i]) {
      cout << "No\n";
      return;
    }
  }

  cout << "Yes\n";
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; //cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}

// https://atcoder.jp/contests/abc356/tasks/abc356_b