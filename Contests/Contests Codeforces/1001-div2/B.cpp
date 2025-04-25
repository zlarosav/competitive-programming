#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  if (n == 1) cout << "1\n";
  else if (n % 2 == 0) cout << "-1\n";
  else {
    vector<int> p(n);
    int left = 0, right = n-1;
    int num = 1;

    while (left <= right) {
      if (num % 2 == 1) {
        p[left++] = num;
      } else {
        p[right--] = num;
      }
      num++;
    }

    for (int e : p) cout << e << ' ';
    cout << '\n';
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
