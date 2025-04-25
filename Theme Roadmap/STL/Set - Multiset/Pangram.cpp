#include <bits/stdc++.h>

using namespace std;

void solve() {
  set<char> spalabra;
  int n; cin >> n;
  string palabra; cin >> palabra;
  for (char& ch : palabra) {
    spalabra.insert(tolower(ch));
  }

  string abc = "abcdefghijklmnopqrstuvwxyz";
  for (char& ch : abc) {
    if (spalabra.count(ch) == 0) {
      cout << "NO";
      return;
    }
  }

  cout << "YES";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/problem/520/A