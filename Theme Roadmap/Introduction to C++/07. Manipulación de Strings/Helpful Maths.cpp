#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() { 
  string input; cin >> input;
  vector<int> freq(3);
  for (int i = 0; i < input.size(); i+=2) {
    freq[input[i] - '0' - 1]++;
  }

  string ans = "";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < freq[i]; j++) {
      ans += char(i + 1 + '0'); ans += '+';
    }
  }
  ans.pop_back();
  cout << ans;
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

// https://codeforces.com/problemset/problem/339/A