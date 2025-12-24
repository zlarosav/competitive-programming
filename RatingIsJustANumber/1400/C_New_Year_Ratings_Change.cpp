#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

#define pb push_back
#define sz(a) ((int)(a).size())
#define ff first
#define ss second
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).rbegin(), (a).rend()
#define approx(a) fixed << setprecision(a)

using ll = long long;
const double PI = 3.141592653589793;
const ll MX = 1e9 + 1;

void solve() {
  ll n; cin >> n;
  vector<ll> ans(n);
  unordered_map<ll, vector<int>> idxs;
  unordered_set<ll> used;
  for (int i = 0; i < n; i++) {
    ll x; cin >> x;
    ans[i] = x;
    idxs[x].pb(i);
    used.insert(x);
  }
  vector<ll> conj(all(used));
  sort(all(conj));
  ll pointer = 0;
  for (ll x : conj) {
    auto& pos = idxs[x];
    for (int j = 1; j < sz(pos); j++) {
      pointer = max(pointer, x);
      while (used.count(pointer)) pointer++;
      ans[pos[j]] = pointer;
      used.insert(pointer);
      pointer++;
    }
  }
  for (ll x : ans) cout << x << ' ';
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

// https://codeforces.com/contest/379/problem/C