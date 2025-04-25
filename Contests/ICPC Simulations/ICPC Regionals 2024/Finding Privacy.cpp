#include <bits/stdc++.h>

using namespace std;

void solve() {
  int k, n; cin >> k >> n;
  int mx = ceil((double)n/2);
  int mn = ceil((double)n/3);
  string ans = "";
  if (mn <= k && k <= mx) {
    while (ans.size() < n) {
      if (n - ans.size() == 3*k) {
        ans += "-X-";
      } else {
        ans += "X-";
      }
      k--;
    }
  } else {
    ans = "*";
  }
  ans = ans.substr(0, n);
  cout << ans;
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