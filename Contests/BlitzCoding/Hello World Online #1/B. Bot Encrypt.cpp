#include <bits/stdc++.h>

using namespace std;

void solve() {
  string w; cin >> w;
  char upper = toupper(w[1]);
  char lower = tolower(w[0]);
  cout << upper << w.substr(2, w.size()-2) << lower << "secret" << endl;
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