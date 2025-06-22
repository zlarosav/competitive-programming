#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

#define pb push_back
#define sz(a) ((int)(a).size())
#define ff first
#define ss second
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).rbegin(), (a).rend()
#define approx(a) fixed << setprecision(a)

using ll = long long;
const ll MX = 1e9 + 1;

void solve() {
  int n, k; cin >> n >> k;
  int ans = INT_MIN;
  int last_num = 0;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    ans = max(ans, x - last_num);
    last_num = x;
  }
  ans = max(ans, 2*(k-last_num));
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