#include <bits/stdc++.h>

using namespace std;

void solve() {
  string w, aZ; cin >> w;
  map<int, char> others;
  for (int i = 0; i < w.size(); i++) {
    if (w[i] != 'A' && w[i] != 'Z') others[i] = w[i];
    else if (w[i] == 'A' || w[i] == 'Z') aZ += w[i];
  }
  reverse(aZ.begin(), aZ.end());
  for (int i = 0, j = 0; i < w.size(); i++) {
    if (others[i]) cout << others[i];
    else {cout << aZ[j]; j++;}
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/26