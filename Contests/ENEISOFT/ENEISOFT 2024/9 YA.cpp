#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

bool esPrimo(long long n) {
  if (n < 2) return false;
  for (long long p = 2; p * p <= n; p++) {
    if (n % p == 0) return false;
  }
  return true;
}

void solve() {
  string s; cin >> s;

  int n = s.size();
  for (int mask = 1; mask < (1 << n); mask++) {
    string sub = "";
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i)) {
        sub += s[i];
      }
    }
    
    if (sub.size() >= 2) {
      long long num = stoll(sub);
      if (esPrimo(num)) {
        cout << num << '\n';
        return;
      }
    }
  }
  
  cout << "-1\n";
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
