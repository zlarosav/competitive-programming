#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

/* void solve() {
  int n; cin >> n;
  set<int> st;
  for (int i=0; i<n; i++) {
    int e; cin >> e;
    st.insert(e);
  }
  if (st.size() == 1) { cout << "NO"; return; }
  vector<int> v(st.begin(), st.end());
  cout << v[1];
} */

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  sort(v.begin(), v.end());
  for (int i=1; i<n; i++) {
    if (v[i] != v[i-1]) {
      cout << v[i]; 
      return;
    }
  }
  cout << "NO";
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

// https://codeforces.com/problemset/problem/22/A