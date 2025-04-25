#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long N, M, A; cin >> N >> M >> A;
  long long a = (N % A != 0 ? ((N/A) + 1) : N/A);
  long long b = (M % A != 0 ? ((M/A) + 1) : M/A);
  long long ans = a * b;
  cout << ans;
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