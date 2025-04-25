#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> nums(n);
  for (int& n : nums) cin >> n;
  int suma = 0;
  for (int& n : nums) {
    int x; cin >> x;
    suma += n * x;
  };
  cout << suma << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/24