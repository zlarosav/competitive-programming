#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  map<int, int> nums;
  for (int i = 0; i < n; i++) {
    int x; cin >> x; nums.insert({ i+1, x });
  }

  for (int i = 0; i < n; i++) {
    if (nums[i+1] > 0) nums.erase(nums[i+1]);
  }

  vector<int> faltantes;
  for (int i = 0; i < n; i++) {
    if (nums[i+1] > 0) faltantes.push_back(i+1);
  }

  cout << faltantes.size() << '\n';
  for (int& e : faltantes) cout << e << ' ';
  cout << '\n';
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

// https://atcoder.jp/contests/abc293/tasks/abc293_b?lang=en