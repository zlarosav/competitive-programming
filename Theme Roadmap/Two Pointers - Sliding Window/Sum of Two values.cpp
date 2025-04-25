#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, desire; cin >> n >> desire;
  // {valor, posicion}
  vector<pair<int,int>> v(n);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v[i].first = x;
    v[i].second = i;
  }
  sort(v.begin(), v.end());

  int l = 0, r = n-1;
  while (l < r) {
    int suma = v[l].first + v[r].first;
    if (suma == desire) {
      cout << v[r].second+1 << ' ' << v[l].second+1;
      return;
    } 
    if (suma > desire) r--;
    else l++;
  }

  cout << "IMPOSSIBLE";
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

// https://cses.fi/problemset/result/11101540/