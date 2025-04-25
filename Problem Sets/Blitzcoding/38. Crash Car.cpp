#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string movs; cin >> movs;
  int left = 0, right = 0, alterno = 0;
  for (char& mov : movs) {
    if (mov == '>') right++;
    if (mov == '<') left++;
    if (mov == '*') alterno++;
  }

  if (right > left) {
    cout << right - left + alterno << endl;
  } else {
    cout << left - right + alterno << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/38