#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n, q; cin >> n;
    int nums[n]; 
    for (int& i : nums) cin >> i;
    cin >> q;
    for (int& i : nums) {
      if (q == 0 && i % 2 == 0) cout << i << " ";
      else if (q == 1 && i % 2 != 0) cout << i << " ";
    }
    cout << '\n';
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/31