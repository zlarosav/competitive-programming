#include <bits/stdc++.h>

using namespace std;

void solve() {
  string word; cin >> word;
  word = word.substr(1, word.size()-2);
  if ((word.size() & 1) == 0) {
    cout << "NO" << endl; return;
  }
  string rword = word;
  reverse(rword.begin(), rword.end());
  if (rword == word) {
    cout << "SI" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while(t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/5