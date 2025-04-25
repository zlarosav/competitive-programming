#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long x, k; cin >> x >> k;

  auto isPrime = [&](long long n) {
    if (n == 1) return false;
    for (long long i = 2; i * i <= n; i++) {
      if (n % i == 0) return false;
    }
    return true;
  };

  if (x == 1) {
    string nstr(k, '1');
    cout << (isPrime(stoll(nstr)) ? "YES\n" : "NO\n");
    return;
  }

  if (k > 1) {
    cout << "NO\n";
    return;
  }
  
  cout << (isPrime(x) ? "YES\n" : "NO\n");
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