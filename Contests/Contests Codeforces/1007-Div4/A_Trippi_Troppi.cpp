#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  string s; getline(cin, s);
  cout << s[0];
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ') {
      cout << s[i+1];
    }
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }

  return 0;
}