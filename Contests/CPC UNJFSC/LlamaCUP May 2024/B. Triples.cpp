#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> idx;
  for (int i = 0; i < n; i++) {
    int num; cin >> num;
    if (num % 3 == 0) idx.push_back(i+1);
  }
  if (idx.size() == 0) cout << "no hay triples" << endl;
  else {
    cout << idx.size() << endl;
    for (auto& i : idx) cout << i << " ";
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

// https://omegaup.com/arena/LLC01/practice/#problems/CB-Arreglos-Triples