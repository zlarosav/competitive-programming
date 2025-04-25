#include <bits/stdc++.h>

using namespace std;

void solve() {
  int q; cin >> q;
  map<string, int> mp;
  while (q--) {
    int type; cin >> type;
    switch (type) {
      case 0: {
        string key; int x; cin >> key >> x;
        mp[key] = x;
      } break;
      case 1: {
        string key; cin >> key;
        cout << mp[key] << "\n";
      } break;
      case 2: {
        string key; cin >> key;
        mp.erase(key);
      } break;
    }
  }
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_8_B