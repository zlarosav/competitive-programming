#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n; cin >> n;
  if (n == 1) {
    cout << 1; return;
  }
  long long count = 1;
  for (long long i=1; i<=n/2; i++) {
    long long resto = n % i;
    long long div = n/i;
    if (div <= resto) continue;
    
    cout << i << ' ';
    count++;
  }
  cout << endl << count;
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