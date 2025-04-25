#include <bits/stdc++.h>

using namespace std;

void solve2() {
  int n; cin >> n;
  string s; cin >> s;
  if (n == 1) {
    cout << "-1 -1\n";
    return;
  }

  int l = 0, r;
  int as = 0, bs = 0;
  while (l < n) {
    as = 0, bs = 0;
    r = l;
    while (r < n && ((as == 0 && bs == 0) || as != bs)) {
      if (s[r] == 'a') as++;
      else if (s[r] == 'b') bs++;
      if (as == bs) {
        cout << l+1 << ' ' << r+1 << '\n';
        return; 
      }
      r++;
    }
    l++;
  }

  cout << "-1 -1\n";
}

// Se puede hacer sin two pointers con implementacion xd
void solve() {
  int n; cin >> n;
  string s; cin >> s;
  for (int i = 0; i < n-1; i++) {
    if (s[i] != s[i+1]) {
      cout << i+1 << ' ' << i+2 << '\n';
      return;
    }
  }

  cout << "-1 -1\n";
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

// https://codeforces.com/contest/1569/problem/A