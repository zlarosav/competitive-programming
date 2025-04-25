#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  int nums[n];
  for (int& x : nums) cin >> x;

  for (int i = 0; i < n; i++) {
    int producto = 1;
    for (int j = 0; j < n; j++) {
      if (i != j) producto *= nums[j];
    }
    cout << producto << ' ';
  }

  cout << '\n';
}

int main() {
  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/48