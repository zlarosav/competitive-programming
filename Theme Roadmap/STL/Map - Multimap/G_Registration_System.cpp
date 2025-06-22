#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;



void solve() {
  int q; cin >> q;
  map<string, int> freq;
  while (q--) {
    string name; cin >> name;
    freq[name]++;
    if (freq[name] > 1) {
      string nuevo = name + to_string(freq[name]-1);
      cout << nuevo << '\n';
    } else {
      cout << "OK\n";
    }
  }
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