#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> p(n);
  vector<int> color(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    p[i]--; 
  }
  
  string s; cin >> s;
  for (int i = 0; i < n; i++) {
    color[i] = s[i] - '0';
  }
  
  vector<int> F(n, 0);
  vector<bool> visited(n, false);
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      int current = i;
      vector<int> component;
      int black_count = 0;
      
      while (!visited[current]) {
        visited[current] = true;
        component.push_back(current);
        if (color[current] == 0) {
          black_count++;
        }
        current = p[current];
      }
      
      for (int idx : component) {
        F[idx] = black_count;
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    cout << F[i] << ' ';
  }
  cout << '\n';
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

// https://codeforces.com/contest/2008/problem/D