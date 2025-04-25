#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

void solve() {
  int n, target; cin >> n >> target;
  vector<int> nums(n);
  for (int& i : nums) cin >> i;
  sort(nums.begin(), nums.end());

  // Precalculamos las potencias de 2 con el MOD
  // Si solo usaramos pow(2, r-l) no podríamos aplicarle el mod
  vector<int> pow2(n, 1);
  for (int i = 1; i < n; i++) {
    pow2[i] = (pow2[i-1] * 2) % MOD;
  }

  int total = 0;
  int l = 0, r = n-1;
  while (l <= r) {
    if (nums[l] + nums[r] <= target) {
      total = (total + pow2[r-l]) % MOD;
      l++;
    } else {
      r--;
    }
  }
  
  cout << total;
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

// https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/description/