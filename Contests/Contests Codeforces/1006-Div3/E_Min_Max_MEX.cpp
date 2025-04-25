#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

bool check(vector<int> a, int k, int x) {
  vector<int> freq(x, 0);
  for (int val : a) {
    if (val < x) freq[val]++;
  }
  for (int r = 0; r < x; r++) {
    if (freq[r] < k) return false;
  }
  //dbg(freq);
  
  int segments = 0;
  vector<int> seen(x, false);
  int countFound = 0;
  
  for (int val : a) {
    if (val < x && !seen[val]) {
      seen[val] = true;
      countFound++;
    }
    if (countFound == x) {
      segments++;
      for (int& b : seen) b = false;
      countFound = 0;
    }
  }
  
  return segments >= k;
}

void solve() {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int& i : a) cin >> i;
  
  int l = 0, r = n + 1; 
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (check(a, k, mid)) l = mid + 1;
    else r = mid;
  }

  cout << l - 1 << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  
  return 0;
}
