#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  //vector<int> v(n);
  map<int, pair<int, vector<int>>> mp; // valor - (frecuencia, indices)
  vector<int> z;

  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    //v[i] = x;
    mp[x].first++;
    mp[x].second.push_back(i);
  }

  for (auto m : mp) {
    if (m.second.first <= 2) {
      z.push_back(m.first);
    } else {
      int rango = m.second.second[1] - m.second.second[0];
      bool flag = true;
      for (int i = 1; i < m.second.second.size()-1; i++) {
        if (m.second.second[i+1] - m.second.second[i] != rango) {
          flag = false;
          break;
        }
      }
      if (flag) z.push_back(m.first);
    }
  }

  sort(z.begin(), z.end());
  cout << z.size() << '\n';
  for (int zItem : z) {
    cout << zItem << " ";
    //int resta = mp[zItem].second.back();
    if (mp[zItem].first == 1) {
      cout << "0\n";
    } else {
      /*for (int i = 0; i < mp[zItem].second.size() - 1; i++) {
        resta -= mp[zItem].second[i];
      }*/
      cout << mp[zItem].second[1] - mp[zItem].second[0] << '\n';
      //cout << resta << '\n';
    }
  }

  //dbg(mp);
  //dbg(v);
  //dbg(z);
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