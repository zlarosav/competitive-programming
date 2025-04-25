#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, goal; cin >> n >> goal;
  int nums[n];
  for(int& num : nums) cin >> num;

  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int restante = goal - nums[i];
    if (mp.count(restante)) {
      cout << mp[restante]+1 << ' ' << i+1 << '\n';
      return;
    }
    mp[nums[i]] = i;
  }
  
  cout << "IMPOSSIBLE";
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

// https://cses.fi/problemset/task/1640/