#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n, x, y;
  cin >> n >> x >> y;
  vector<pair<long long, long long>> platos(n);
  for (int i = 0; i < n; i++) cin >> platos[i].first;
  for (int i = 0; i < n; i++) cin >> platos[i].second;

  sort(platos.begin(), platos.end(), [&](auto& a, auto& b) {
    return a.first > b.first;
  });
  //dbg(platos);
  long long suma = 0; int count1 = 0;
  for (int i = 0; i < n; i++) {
    suma += platos[i].first;
    count1++;
    if (suma > x) break;
  }

  sort(platos.begin(), platos.end(), [&](auto& a, auto& b) {
    return a.second > b.second;
  });
  //dbg(platos);
  suma = 0; int count2 = 0;
  for (int i = 0; i < n; i++) {
    suma += platos[i].second;
    count2++;
    if (suma > y) break;
  }

  cout << min(count1, count2) << '\n';
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