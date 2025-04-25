#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c; cin >> a >> b >> c;
  
  if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
    cout << "SI" << endl;
  } else {
    cout << "NO" << endl;
  }

  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; 
  t = 1;
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://omegaup.com/arena/LLAMACUP-2024-1/practice/#problems/ES-Terna-pitagorica