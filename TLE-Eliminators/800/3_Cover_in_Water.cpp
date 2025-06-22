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
  int n; cin >> n;
  string s; cin >> s;
  int total = 0, curr = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '#') {
      curr = 0;
      continue;
    }
    curr++;
    total++;
    if (curr == 3) {
      cout << "2\n";
      return;
    }
  }
  cout << total << '\n';
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