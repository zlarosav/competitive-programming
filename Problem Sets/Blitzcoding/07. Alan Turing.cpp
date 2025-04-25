#include <bits/stdc++.h>

using namespace std;

void solve() {
  string a, b; cin >> a >> b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (a == b) cout << "SI" << endl;
  else cout << "NO" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while(t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/7