#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1); // lol da el valor de PI

void solve() {
  int theta, n; cin >> theta >> n;
  double tanTheta = tan(theta * PI / 180.0);

  vector<pair<int, int>> flatlanders(n);
  for (int i = 0; i < n; i++) {
    int x, h; cin >> x >> h;
    flatlanders[i] = {x, h};
  }
  sort(flatlanders.begin(), flatlanders.end());

  double totalLen = 0.0;
  double currentEnd = 0.0;

  for (auto flatlander : flatlanders) {
    int x = flatlander.first;
    int h = flatlander.second;

    double shadowLen = h / tanTheta;
    double shadowEnd = x + shadowLen;

    if (x > currentEnd) {
      totalLen += shadowLen;
      currentEnd = shadowEnd;
    } else {
      if (shadowEnd - currentEnd > 0.0) {
        totalLen += shadowEnd - currentEnd;
      }
      if (currentEnd < shadowEnd) {
        currentEnd = shadowEnd;
      }
    }
  }

  cout << fixed << setprecision(4) << totalLen << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/group/8JufKtWW7p/contest/565415/problem/J