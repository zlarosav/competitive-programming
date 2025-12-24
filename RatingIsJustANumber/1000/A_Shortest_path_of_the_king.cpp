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
const double PI = 3.141592653589793;
const ll MX = 1e9 + 1;

void solve() {
  string start, end; cin >> start >> end;
  pair<int, int> s = {(start[0]-'a')+1, start[1]-'0'}, t = {(end[0]-'a')+1, end[1]-'0'};
  map<pair<int, int>, string> movs = {{{0,1}, "D"}, {{0,-1}, "U"}, {{1,0}, "L"}, {{-1,0}, "R"}, {{1,1}, "LD"}, {{1,-1}, "LU"}, {{-1,1}, "RD"}, {{-1,-1}, "RU"}};
  vector<string> ans;

  while (s != t) {
    int dx = s.ff - t.ff, dy = s.ss - t.ss;
    if (dx != 0) dx /= abs(dx);
    if (dy != 0) dy /= abs(dy);
    s.ff -= dx;
    s.ss -= dy;
    ans.pb(movs[{ dx,  dy}]);
  }
  
  cout << sz(ans) << '\n';
  for (string x : ans) cout << x << '\n';
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