#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string sentence = "", word;
  while (cin >> word) {
    sentence += word;
  }
  set<char> vowels = {'a','e','i','o','u','y'};
  char analize = tolower(sentence[sentence.size()-2]);
  if (vowels.count(analize) > 0) cout << "YES";
  else cout << "NO";
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

// https://codeforces.com/contest/49/problem/A