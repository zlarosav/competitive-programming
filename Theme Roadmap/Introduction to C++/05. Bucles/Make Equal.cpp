#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  int nums[n];
  int suma = 0;
  for (int& num : nums) {
    cin >> num;
    suma += num;
  }
  if (n == 1) { cout << "YES" << '\n'; return; }
  int goal = suma / n;
  
  for (int i = 0; i < n; i++) {
    if (nums[i] < goal) {
      cout << "NO" << '\n';
      return;
    }
    nums[i+1] += nums[i] - goal;
    nums[i] = goal;
  }

  if (nums[n-1] != goal) cout << "NO" << '\n';
  else cout << "YES" << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/problem/1931/B