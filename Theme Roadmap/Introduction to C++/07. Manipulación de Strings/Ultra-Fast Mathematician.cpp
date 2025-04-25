#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  /* string a, b; cin >> a >> b;
  int len = a.size();
  bitset<100> A(a), B(b), ANS = (A^B);
  for (int i=len-1; i>=0; i--) { 
    cout << ANS[i];
  } */

  string s1, s2; cin >> s1 >> s2;
  for(int i=0; i<s1.length(); i++) {
    if(s1[i] != s2[i]) cout << "1";
    else cout << "0";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/contest/61/problem/A