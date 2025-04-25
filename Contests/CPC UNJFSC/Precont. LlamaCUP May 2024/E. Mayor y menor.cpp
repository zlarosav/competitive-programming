#include <bits/stdc++.h>

using namespace std;

void solve() {
  int nums[5];
  for (auto& e : nums) cin >> e;
  sort(nums, nums+5);
  cout << nums[0] << " " << nums[4] << endl;
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

// https://omegaup.com/arena/LLAMACUP-2024-1/practice/#problems/Mayor-menor