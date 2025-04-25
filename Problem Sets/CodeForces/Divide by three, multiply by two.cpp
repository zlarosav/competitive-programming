#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n; cin >> n;
  vector<long long> v(n);
  for (long long& i : v) cin >> i;
  //sort(v.rbegin(), v.rend());

  set<long long> st(v.begin(), v.end());

  vector<long long> ans(n);
  long long possible = 0, curr = 0;
  for (int i = 0; i < n; i++) {
    ans[curr] = v[i];
    long long next = v[i];
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      if (next % 3 == 0 && st.count(next/3) > 0) {
        next /= 3;
      } else if (st.count(next*2) > 0) {
        next *= 2;
      } else {
        curr = 0;
        break;
      }
      curr++;
      ans[curr] = next;
      if (curr == n-1) {
        for (long long& i : ans) cout << i << ' ';
        return;
      }
    }
  }
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

// https://codeforces.com/contest/977/problem/D