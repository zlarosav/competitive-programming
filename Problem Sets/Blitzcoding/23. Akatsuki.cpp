#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  set<int> nums;
  for (int i=0; i < n; i++) {
    int x; cin >> x;
    nums.insert(x);
  }
  cout << *nums.rbegin() - *nums.begin() << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/23