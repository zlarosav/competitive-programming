#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  cout << (n % 4 == 0 ? ++n : --n) << endl; 
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

// https://www.codechef.com/problems/DECINC?tab=statement