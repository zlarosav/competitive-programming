#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  unordered_map<int, int> mp;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    mp[x]++;
  }
  vector<pair<int,int>> mpV(mp.begin(), mp.end());
  sort(mpV.begin(), mpV.end(), [&](auto& a, auto& b){
    return a.second < b.second;
  });

  long long ans = 0;
  for (int i=0; i<mpV.size()-1; i++) {
    ans += mpV[i].second;
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}