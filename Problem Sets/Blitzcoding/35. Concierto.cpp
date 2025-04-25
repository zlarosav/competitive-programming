#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string input; getline(cin, input);
  stringstream ss(input);

  int n, max_age = 0, pos = 0; ss >> n;
  for (int i = 1; i <= n; i++) {
    int age; ss >> age;
    if (age > max_age) {
      max_age = age;
      pos = i;
    }
  }
  cout << pos << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/35