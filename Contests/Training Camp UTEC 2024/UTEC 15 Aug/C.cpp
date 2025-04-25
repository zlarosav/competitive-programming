#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n, x0, y0, xf, yf; cin >> n >> x0 >> y0 >> xf >> yf;
  string movs; cin >> movs;
  long long p = 0;
  for (char& c : movs) {
    dbg(x0, y0);
    if (xf <= x0 && yf >= y0) {
      if (c == 'W') x0--;
      if (c == 'N') y0++;
      p++;
    } else if (xf <= x0 && yf <= y0) {
      if (c == 'W') x0--;
      if (c == 'S') y0--;
      p++;
    } else if (xf >= x0 && yf >= y0) {
      if (c == 'E') x0++;
      if (c == 'N') y0++;
      p++;
    } else if (xf >= x0 && yf <= y0) {
      if (c == 'E') x0++;
      if (c == 'S') y0--;
      p++;
    }

    if (x0 == xf && y0 == yf) {
      cout << (p == 0 ? -1 : p); return;
      //cout << -1; return;
    }

  }
  cout << (p == 0 ? -1 : p);

  // char, counter, pos
  /* map<char, pair<int, int>> m;
  for (int i=0; i<n;i++) {
    m[movs[i]].first++;
    m[movs[i]].second = i+1;
  }

  if (xf < x0 && yf > y0 && abs(xf-x0) <= m['W'].first && abs(yf-y0) <= m['N'].first) {
    //cout << max(m['W'].second, m['N'].second); return;
    cout << max(abs(xf-x0), abs(yf-y0)); return;
  }
  if (xf < x0 && yf == y0 && abs(xf-x0) <= m['W'].first) {
    //cout << m['W'].second; return;
    cout << abs(xf-x0); return;
  }
  if (xf < x0 && yf < y0 && abs(xf-x0) <= m['W'].first && abs(yf-y0) <= m['S'].first) {
    //cout << max(m['W'].second, m['S'].second); return;
    cout << max(abs(xf-x0), abs(yf-y0)); return;
  }

  if (xf == x0 && yf > y0 && abs(yf-y0) <= m['N'].first) {
    //cout << m['N'].second; return;
    cout << abs(yf-y0); return;
  }
  if (xf == x0 && yf < y0 && abs(yf-y0) <= m['S'].first) {
    //cout << m['S'].second; return;
    cout << abs(yf-y0); return;
  }

  if (xf > x0 && yf > y0 && abs(xf-x0) <= m['E'].first && abs(yf-y0) <= m['N'].first) {
    //cout << max(m['E'].second, m['N'].second); return;
    cout << max(abs(xf-x0), abs(yf-y0)); return;
  }
  if (xf > x0 && yf == y0 && abs(xf-x0) <= m['E'].first) {
    //cout << m['E'].second; return;
    cout << abs(xf-x0); return;
  }
  if (xf > x0 && yf < y0 && abs(xf-x0) <= m['E'].first && abs(yf-y0) <= m['S'].first) {
    //cout << max(m['E'].second, m['S'].second); return;
    cout << max(abs(xf-x0), abs(yf-y0)); return;
  }

  cout << -1; */
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