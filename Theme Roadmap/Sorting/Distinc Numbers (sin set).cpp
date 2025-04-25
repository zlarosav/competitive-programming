#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> arr(n);
  for (int& num : arr) cin >> num;
  sort(arr.begin(), arr.end());
  int count = 1;
  for (int i = 0; i+1 < n; i++) {
    if (arr[i] != arr[i+1]) count++;
  }
  cout << count << '\n';
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

// https://cses.fi/problemset/task/1621