#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);
  int mxB = INT_MIN, mxA = INT_MIN, mnA = INT_MAX;
  for (int& x : a) {
    cin >> x;
    mnA = min(mnA, x);
    mxA = max(mxA, x);
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    mxB = max(mxB, b[i]);
  }
  if (mxB == -1) {
    cout << k + mnA - mxA + 1 << '\n'; 
  } else {
    int sum = -1;
    for (int i = 0; i < n; i++) {
      if (sum == -1 && b[i] != -1) {
        sum = a[i] + b[i];
      }

      if (sum != -1 && b[i] != -1 && a[i] + b[i] != sum) {
        cout << 0 << '\n';
        return;
      }

      if (sum != -1 && b[i] == -1) {
        if (k < sum - a[i] || a[i] > sum) {
          cout << 0 << '\n';
          return;
        }
      }
    }
    cout << 1 << '\n';
  }
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
