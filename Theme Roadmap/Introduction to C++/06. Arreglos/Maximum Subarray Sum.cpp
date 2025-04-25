#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<long long> arr(n);
  for (long long& i : arr) cin >> i;

  long long max_sum = arr[0];
  long long current_sum = arr[0];

  for (int i = 1; i < n; i++) {
    current_sum = max(arr[i], current_sum + arr[i]);
    max_sum = max(max_sum, current_sum);
  }

  cout << max_sum << endl;
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

// algoritmo de Kadane
// https://cses.fi/problemset/task/1643/