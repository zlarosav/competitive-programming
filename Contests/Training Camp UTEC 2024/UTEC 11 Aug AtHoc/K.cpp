#include <bits/stdc++.h>

using namespace std;

void solve() {
  int op; cin >> op;
  int sum = 0;
  string ops; cin >> ops;
  for (int i=0; i<op; i++) {
    if (ops[i] == '+') {
      sum++;
    } else if (ops[i] == '-') {
      if (sum-1<0) continue;
      sum--;
    }
  }
  cout << sum;
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