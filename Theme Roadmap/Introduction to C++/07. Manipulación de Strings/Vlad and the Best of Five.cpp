#include <bits/stdc++.h>

using namespace std;

void solve() {
  string w; cin >> w;
  int cA = 0, cB = 0; 
  for (char e : w) {
    if (e == 'A') cA++;
    else cB++;
  }
  cout << (cA > cB ? 'A' : 'B') << endl;
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

// https://codeforces.com/problemset/problem/1926/A