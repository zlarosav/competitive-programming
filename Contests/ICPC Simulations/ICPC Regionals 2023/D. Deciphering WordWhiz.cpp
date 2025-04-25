#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin>>n;
  map<string, int> mp;
  string obj; cin>>obj;
  mp["*****"]++;

  for (int z = 1; z < n; z++) {
    string word; cin >> word;
    string ans = "";
    bool flag = false;
    for (int i=0; i<5; i++){
      if (word[i] == obj[i]) {
        ans += '*';
      } else {
        bool found = false;
        for (int j = 0; j < 5; j++) {
          if (word[i] == obj[j]) { found = true; break;}
        }
        if (found) ans += '!';
        else ans += 'X';
      }
    }
    mp[ans]++;
  }

  int q; cin >> q;
  while (q--) {
    string s; cin >> s;
    cout << mp[s] << '\n';
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

// https://codeforces.com/gym/104736/problem/D