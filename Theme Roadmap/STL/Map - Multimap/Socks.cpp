#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  map<int, int> nums;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    nums[x]++; 
  }
  int suma = 0;
  for (auto& n : nums) {
    suma += n.second / 2;
  }
  cout << suma;
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

// https://atcoder.jp/contests/abc295/tasks/abc295_c