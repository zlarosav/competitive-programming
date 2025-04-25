#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string line; getline(cin, line);
  string curr = "";
  vector<string> rr;
  for (char ch : line) {
    if (ch == '(') {
      rr.push_back(curr);
      curr = "";
    } else if (ch == ')') {
      reverse(curr.begin(), curr.end());
      
      if (!rr.empty()) {
        curr = rr.back() + curr;
        rr.pop_back(); 
      }
    } else {
      curr += ch;
    }
  }

  cout << curr << endl;
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