#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int rating; cin >> rating;
  if (rating < 1200) {
    cout << "Plomo" << endl;
  } else if (1200 <= rating && rating < 1500) {
    cout << "Verde" << endl;
  } else if (1500 <= rating && rating < 1900) {
    cout << "Azul" << endl;
  } else if (1900 <= rating && rating < 2200) {
    cout << "Amarillo" << endl;
  } else if (2200 <= rating) {
    cout << "Rojo" << endl;
  }
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