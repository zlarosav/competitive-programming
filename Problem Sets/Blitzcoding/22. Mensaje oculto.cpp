#include <bits/stdc++.h>

using namespace std;

void solve() {
  string msg, word; getline(cin, msg);
  cout << msg << endl;
  return;
  stringstream ss(msg);
  while(ss >> word) {
    cout << word[0];
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; 
  cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/22