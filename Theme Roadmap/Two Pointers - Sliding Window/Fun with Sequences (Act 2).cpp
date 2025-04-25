#include <bits/stdc++.h>

using namespace std;

void solve() {
  int sSize, qSize;
  cin >> sSize; int s[sSize];
  for (int& e : s) cin >> e;
  cin >> qSize; int q[qSize];
  for (int& e : q) cin >> e;

  int i = 0, j = 0, intersectadosEn = 0;
  while (i < sSize && j < qSize) {
    if (s[i] == q[j]) {
      cout << s[i] << " ";
      intersectadosEn = j;
      i++;
    }
    if (j == qSize-1 && i < sSize) {
      j = intersectadosEn;
      i++;
    } 
    j++;
  }
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

// https://www.spoj.com/problems/SMPSEQ4/en/