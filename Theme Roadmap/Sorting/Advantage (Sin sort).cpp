#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> nums(n);

  int mayor = 0, mayor2 = 0;
  for (int& num : nums) {
    cin >> num;
    if (num > mayor) {
      mayor2 = mayor;
      mayor = num;
    } else if (num > mayor2) {
      mayor2 = num;
    }
  }

  for (int& num : nums) {
    if (num == mayor) {
      cout << num - mayor2 << ' ';
    } else {
      cout << num - mayor << ' ';
    }
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

// https://codeforces.com/problemset/problem/1760/C