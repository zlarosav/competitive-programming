// Kadane's Algorithm

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
  
  long long mxSum = v[0];
  long long currSum = v[0];
  
  for (int i = 1; i < n; i++) {
    currSum = max(v[i], currSum + v[i]);
    mxSum = max(currSum, mxSum);
  }

  cout << mxSum;
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

// https://cses.fi/problemset/task/1643