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
  int a, b; cin >> a >> b;
  if (a > b) swap(a, b);
  if (a == b) {
    cout << "0\n";
    return;
  }
  if (a & 1 && !(b & 1)) b--;
  else if (!(a & 1) && b & 1) b++;
  cout << (a == b ? 1 : (b-a)/2) << '\n';
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