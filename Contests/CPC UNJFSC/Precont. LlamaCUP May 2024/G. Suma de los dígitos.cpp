#include <bits/stdc++.h>

using namespace std;

void solve() {
  string number; cin >> number;
  int sum = 0;
  
  for (char ch : number) {
    sum += ch - '0';
  }
  
  cout << sum << endl;
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

// https://omegaup.com/arena/LLAMACUP-2024-1/practice/#problems/Suma-de-los-digitos