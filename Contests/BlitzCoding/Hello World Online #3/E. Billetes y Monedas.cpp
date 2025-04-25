#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int M; cin >> M;
  vector<int> v = {200,100,50,20,10,5,2,1};
  int count = 0, i = 0;
  while (M > 0 && i < 8) {
    while (M >= v[i]) {
      count++;
      M -= v[i];
    }
    i++;
  }
  cout << count << '\n'; return;

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