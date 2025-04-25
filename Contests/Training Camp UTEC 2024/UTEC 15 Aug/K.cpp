#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  int goal = (n%2==0 ? n/2 : (n+1)/2);
  map<int, int> fronts, backs;
  for(int i=0; i<n; i++) {
    int f, b; cin >> f >> b;
    fronts[f]++; backs[b]++;
  }

  for (auto& e : fronts) {
    if (e.second >= goal) {
      cout << 0; return;
    }

    if (backs[e.first] + e.second >= goal) {
      cout << backs[e.first]; return;
    }
  }
  
  cout << -1;
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