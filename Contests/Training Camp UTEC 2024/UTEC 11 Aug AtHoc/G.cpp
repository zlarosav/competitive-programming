#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n, a; cin >> n >> a;
  map<string, long long> mp;
  for (long long i=0; i<n; i++) {
    string w; cin >> w;
    long long c; cin >> c;
    mp[w] += c;
  }
  vector<long long> v;
  for (auto& m : mp) v.push_back(m.second);
  sort(v.rbegin(), v.rend());

  long long suma = 0, len = v.size();
  for (int i=0;i<min(a, len); i++) {
    suma += v[i];
  }
  cout << suma;
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