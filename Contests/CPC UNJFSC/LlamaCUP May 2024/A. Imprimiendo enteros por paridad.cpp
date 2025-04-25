#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, p; cin >> n;
  int nums[n];
  for (auto& num : nums) cin >> num;
  cin >> p;
  for (auto& num : nums) {
    if (p == 0 && (num & 1) == 0) cout << num << " ";
    if (p == 1 && (num & 1) != 0) cout << num << " ";
  }
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

// https://omegaup.com/arena/LLC01/practice/#problems/Imprimiendo-enteros-por-paridad