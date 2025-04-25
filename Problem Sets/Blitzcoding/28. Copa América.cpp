#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, goal; cin >> n >> goal;
  int nums[n];
  for (int& i : nums) cin >> i;
  int i = 0, j = 0;
  while(i < n && j < n) {
    int curr = 0;
    while (curr <= goal) {
      curr += nums[j];
      if (curr == goal) {
        cout << i+1 << ' ' << j+1 << "\n"; 
        return;
      }
      j++;
    }
    i++;
    j = i;
  }
  cout << -1 << "\n";
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

// https://blitzcoding.com/problem-detail/28