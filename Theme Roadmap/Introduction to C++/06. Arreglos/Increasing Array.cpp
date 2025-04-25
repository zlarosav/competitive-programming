#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
  int n; cin >> n;
  ll nums[n];
  for (ll& i : nums) cin >> i;
  ll mov = 0, i = 1;
  while (i < n) {
    if (nums[i] < nums[i-1]) {
      mov += nums[i-1] - nums[i];
      nums[i] = nums[i-1];
    }
    i++;
  }
  cout << mov;
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

// https://cses.fi/problemset/task/1094