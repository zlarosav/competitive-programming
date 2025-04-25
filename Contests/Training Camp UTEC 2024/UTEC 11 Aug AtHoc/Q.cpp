#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

int solve() {
  int ans = 0, m, n; cin >> m >> n;
  vector<int> s(m);
  for (int& i : s) cin >> i;
  sort(s.begin(), s.end());
  bool flag = false;
  for (int i=1; i<m; i++) {
    if (s[i]-s[i-1]==1) {
      if (s[i+1]-s[i-1]==2) {
        ans += pow(3, n);
        continue;
      } else {
        
      }
    }
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int num = 1, t; cin >> t;
  while (num <= t) {
    cout << "Caso " << num << ": " << solve() << '\n';
    num++;
  }

  return 0;
}