#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string num; cin >> num;
  vector<int> v = {6,2,5,5,4,5,6,3,7,6};
  int ans = 0;
  for (int i=0; i<num.size(); i++) {
    int pos = num[i] - '0';
    ans += v[pos];
  }
  cout << ans << '\n';
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

// https://blitzcoding.com/problem-detail/36