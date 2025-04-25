#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  int nums[n];
  for (int& num : nums) cin >> num;
  set<int> unique;
  for (int i = n-1; i >= 0; i--) {
    if (unique.count(nums[i]) > 0) {
      cout << n - unique.size() << '\n';
      return;
    }
    unique.insert(nums[i]);
  }
  cout << 0 << '\n';
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

// https://codeforces.com/problemset/problem/1714/B