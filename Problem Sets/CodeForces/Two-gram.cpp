#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  string cadena; cin >> cadena;
  map<string, int> freq;
  for (int i = 0; i < n-1; i++) {
    string sub = cadena.substr(i, 2);
    freq[sub]++;
  }
  string submx = "";
  int freqmx = 0;
  for (auto m : freq) {
    if (freqmx <= m.second) {
      freqmx = m.second;
      submx = m.first;
    }
  }
  cout << submx;
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

// https://codeforces.com/contest/977/problem/B