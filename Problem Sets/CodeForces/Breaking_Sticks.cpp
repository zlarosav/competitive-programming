#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  int mn = INT_MAX;
  for (int& i : v) {
    cin >> i;
    mn = min(i, mn);
  }
  
  dbg(v, mn);
}

int main() {
  int t; cin >> t;
  while(t--){
    solve();
  }
}