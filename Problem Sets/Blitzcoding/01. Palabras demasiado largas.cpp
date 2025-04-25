#include <bits/stdc++.h>

using namespace std;

void solve() {
  string word; cin >> word;
  if (word.size() > 10) {
    cout << word[0] << word.size()-2 << word[word.size()-1] << endl;
    return;
  }
  cout << word << endl;
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

// https://blitzcoding.com/problem-detail/1