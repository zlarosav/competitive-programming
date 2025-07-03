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
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> v[i][j];
    }
  }
  
  int total = 0;
  int capa = 0;
  while (2*capa + 1 <= min(n, m)) {
    int top = capa, bottom = n-capa-1, left = capa, right = m-capa-1;
    string s = "";

    for (int i = left; i <= right; i++) {
      s += v[top][i];
    }

    for (int i = top+1; i <= bottom; i++) {
      s += v[i][right];
    }

    for (int i = right-1; i >= left; i--) {
      s += v[bottom][i];
    }

    for (int i = bottom-1; i > top; i--) {
      s += v[i][left];
    }

    s += s.substr(0, 3);
    for (int i = 0; i + 3 < s.size(); i++) {
      if (s[i] == '1' && s[i+1] == '5' && s[i+2] == '4' && s[i+3] == '3') total++;
    }
    capa++;
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