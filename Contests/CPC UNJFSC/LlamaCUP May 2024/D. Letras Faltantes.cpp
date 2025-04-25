#include <bits/stdc++.h>

using namespace std;

void solve() {
  int nInc, nCom;
  while (cin >> nInc >> nCom) {
    string incompleta, completa, ans; cin >> incompleta >> completa;
    int inc = 0, com = 0;
    while (com < nCom) {
      if (inc < nInc && incompleta[inc] == completa[com]) inc++;
      else ans += completa[com];
      com++;
    }
    if (inc == nInc) cout << ans << endl;
    else cout << "no entiendo" << endl;
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

// https://omegaup.com/arena/LLC01/practice/#problems/LetrasFaltantes