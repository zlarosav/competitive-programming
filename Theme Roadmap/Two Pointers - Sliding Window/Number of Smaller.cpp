#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int& i : a) cin >> i;
  for (int& i : b) cin >> i;

  int l = 0, r = 0;
  while (r < m) {
    while (l < n && a[l] < b[r]) {
      l++;
    }
    cout << l << ' ';
    r++;
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

// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B