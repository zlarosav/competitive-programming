#include <bits/stdc++.h>

using namespace std;

void solve() {
  int sumaJose = 0, sumaJuan = 0;
  for (int i = 0; i < 5; i++) {
    int x; cin >> x;
    sumaJose += x;
  }
  for (int i = 0; i < 5; i++) {
    int x; cin >> x;
    sumaJuan += x;
  }

  if (sumaJose < sumaJuan) cout << "Juan" << endl;
  else if (sumaJose > sumaJuan) cout << "Jose" << endl;
  else cout << "Empate" << endl;
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

// https://blitzcoding.com/problem-detail/16