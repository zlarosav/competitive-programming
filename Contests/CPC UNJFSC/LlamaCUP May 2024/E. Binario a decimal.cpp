#include <bits/stdc++.h>

using namespace std;

void solve() {
  string binario; cin >> binario;
  bitset<32> bits(binario);
  cout << binario << "=" << bits.to_ullong();
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

// https://omegaup.com/arena/LLC01/practice/#problems/Binario-a-decimal