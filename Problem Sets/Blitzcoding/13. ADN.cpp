#include <bits/stdc++.h>

using namespace std;

void solve() {
  string cadena; cin >> cadena;
  for (char& ch : cadena) {
    if (ch == 'a') cout << 't';
    if (ch == 't') cout << 'a';
    if (ch == 'g') cout << 'c';
    if (ch == 'c') cout << 'g';
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/13