#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n; //n+1 nodes
  int conex = n+1;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    if (conex == n+1 && x == 1) conex = i;
  }
  
  for (int i = 1; i < conex; i++) {
    cout << i << ' ';
  }
  cout << n+1 << ' ';
  for (int i = conex; i < n+1; i++) {
    cout << i << ' ';
  }
  cout << '\n';
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