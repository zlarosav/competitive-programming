#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  sort(v.begin(), v.end());

  if (k == 0 && v[0] == 1) {
    cout << -1; 
    return;
  }

  if (k == 0 && v[0] != 1) {
    cout << 1; 
    return;
  }

  int number = v[k-1];
  cout << (n != k && v[k] == number ? -1 : number);
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

// https://codeforces.com/contest/977/problem/C