#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n; cin >> n;
  vector<long long> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  long long mx = v.back();

  long long k = mx + 1;
  for (int i = n-1; i > 0; i--) {
    if (v[i-1] != v[i] - 1) {
      k = v[i] - 1;
      break;
    }
  }
  
  v.push_back(k);
  mx = max(k, mx);

  //dbg(v);
  long long total_sum = accumulate(v.begin(), v.end(), 0LL);
  cout << (mx * (n + 1)) - total_sum << '\n';
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

// https://codeforces.com/group/wIyStOLCoV/contest/563589/problem/01