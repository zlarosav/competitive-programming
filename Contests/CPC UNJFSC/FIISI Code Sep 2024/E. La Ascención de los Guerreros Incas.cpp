#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> need(n);
  need[0] = 0;
  for (int i=1; i<n; i++) {
    int e; cin >> e;
    need[i] = e;
  }
  
  int a, b; cin >> a >> b; b--;
  int ans = 0;
  for (int i=a; i<=b; i++) {
    ans += need[i];
  }
  cout << ans << endl;
}

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}