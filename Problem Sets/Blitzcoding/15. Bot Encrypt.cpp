#include <bits/stdc++.h>

using namespace std;

void solve() {
  string word; cin >> word;
  word[0] = tolower(word[0]);
  word[1] = toupper(word[1]);
  cout << word[1] << word.substr(2, word.size()-2) << word[0] << "secret" << endl;
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

// https://blitzcoding.com/problem-detail/15