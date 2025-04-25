#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  int nums[n];
  for (int i = 0; i < n; i++) cin >> nums[i];
  reverse(nums, nums+n);
  for (auto& i : nums) cout << i << " ";

  return 0;
}

// https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true