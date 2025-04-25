#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string s; cin >> s;
  char caracter;
  set<char> st(s.begin(), s.end());
  for (char c = 'a'; c <= 'z'; c++) {
    if (st.count(c) == 0) {
      caracter = (char) c;
      break;
    }
  }
  //dbg(caracter);
  
  for (int i = 1; i < s.size(); i++) {
    if (s[i-1] == s[i]) {
      cout << s.substr(0, i) + caracter + s.substr(i) << '\n';
      return;
    }
  }
  cout << s << caracter << '\n';
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