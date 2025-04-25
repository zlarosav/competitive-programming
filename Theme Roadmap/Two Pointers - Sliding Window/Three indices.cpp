#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  
  int mxNum = n; // Máximo número que no esté en un extremo
  int i = 0, k = n-1; // los extremos van variando
  while (mxNum > 0) {
    if (v[i] == mxNum) {
      i++;
    } else if (v[k] == mxNum) {
      k--;
    } else {
      int j = i+1;
      while (j < k) {
        if (v[j] == mxNum) break;
        j++;
      }
      cout << "YES\n";
      cout << i+1 << ' ' << j+1 << ' ' << k+1 << '\n';
      return;
    }
    mxNum--;
  }

  cout << "NO\n";
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

// https://codeforces.com/problemset/problem/1380/A