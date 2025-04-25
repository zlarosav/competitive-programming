#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k1, k2; cin >> n;
  cin >> k1;
  queue<int> p1, p2;
  for (int i = 0; i < k1; i++) {
    int x; cin >> x;
    p1.push(x);
  }
  cin >> k2;
  for (int i = 0; i < k2; i++) {
    int x; cin >> x;
    p2.push(x);
  }
  set<pair<queue<int>, queue<int>>> states;
  int rounds = 0;
  while (!p1.empty() && !p2.empty()) {
    if (states.count({p1, p2})) {
      cout << -1 << "\n";
      return;
    }
    states.insert({p1, p2});

    int carta1 = p1.front();
    p1.pop();
    int carta2 = p2.front();
    p2.pop();

    if (carta1 > carta2) {
      p1.push(carta2);
      p1.push(carta1);
    } else {
      p2.push(carta1);
      p2.push(carta2);
    }
    rounds++;
  }
  if (p1.empty()) {
    cout << rounds << " 2" << "\n";
  } else {
    cout << rounds << " 1" << "\n";
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

// https://codeforces.com/problemset/problem/546/C
// https://codeforces.com/contest/546/problem/C