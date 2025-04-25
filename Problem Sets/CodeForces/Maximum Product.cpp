#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

long long productOfDigits(long long x) {
  long long product = 1;
  while (x > 0) {
    int digit = x % 10;
    product *= digit;
    x /= 10;
  }
  return product;
}

void solve() {
  string a, b; cin >> a >> b;
  if (b.size() == 1) { cout << b << '\n'; return; }

  long long a_num = stoll(a), b_num = stoll(b), best_num = b_num;
  long long max_producto = productOfDigits(b_num);

  for (int i = 0; i < b.size(); i++) {
    if (b[i] == '0') continue;
    
    string candidato = b; candidato[i]--;
    for (int j = i + 1; j < b.size(); j++) candidato[j] = '9';
    
    long long candidato_num = stoll(candidato);
    if (candidato_num < a_num) continue;

    long long producto = productOfDigits(candidato_num);
    if (producto > max_producto) {
      max_producto = producto;
      best_num = candidato_num;
    }
  }
  //dbg(string(16, '9'));

  cout << best_num << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/gymProblem/100886/G