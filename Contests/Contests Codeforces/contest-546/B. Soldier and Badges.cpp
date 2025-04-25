#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  int nums[n];
  for (int& i : nums) cin >> i;
  sort(nums, nums+n);
  int coins = 0;
  for (int i = 0; i < n-1; i++) {
    int falta = 0;
    if (nums[i] >= nums[i+1]) {
      falta = nums[i] - nums[i+1] + 1;
      nums[i+1] += falta;
      coins += falta;
    }
  }
  cout << coins << "\n";
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

// https://codeforces.com/contest/546/problem/B
// Problema parecido: https://cses.fi/problemset/task/1094