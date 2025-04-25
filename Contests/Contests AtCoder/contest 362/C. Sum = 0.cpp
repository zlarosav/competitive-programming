#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<pair<long long, long long>> lim;
  pair<long long, long long> suma = { 0, 0 };
  for (int i = 0; i < n; i++) {
    long long l, r; cin >> l >> r;
    suma.first += l;
    suma.second += r;
    lim.push_back({ l, r });
  }

  if (suma.first > 0 || suma.second < 0) {
    cout << "No" << '\n'; 
    return;
  }

  int i = 0;
  vector<long long> ans;
  while (i < n) {
    suma.second -= (lim[i].second-lim[i].first);
    
    if (suma.second < 0) {
      ans.push_back(lim[i].first+abs(suma.second));
      i++;
      while (i < n) {
        ans.push_back(lim[i].second);
        i++;
      }
      break;
    }

    ans.push_back(lim[i].first);
    i++;
  }

  cout << "Yes" << '\n';
  for (long long& a : ans) cout << a << " ";
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

// https://atcoder.jp/contests/abc362/tasks/abc362_c