#include <bits/stdc++.h>

using namespace std;

void solve() {
  string a, b; int limit; cin >> a >> b >> limit;
  int l = 0, r = 0; // "r" -> apunta afuera a.end()
  int n = a.size();
  int mxLen = 0;
  while (l < n) {
    int currSum = 0;
    r = l;
    while (r < n) {
      int dif = abs(a[r] - b[r]);
      if (currSum + dif > limit) break;
      currSum += dif;
      r++;
    }
    mxLen = max(mxLen, r-l);
    l++;
  }
  cout << mxLen;
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

// https://leetcode.com/problems/get-equal-substrings-within-budget/submissions/1446933287/