#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n; cin >> n;
  vector<long long> A(n);
  for (long long i = 0; i < n; i++) cin >> A[i];
  
  long long total = 2*n-1;
  long long l = 0;
  while (l < n) {
    long long r = l + 1;
    
    while (r < n && A[r] - A[r - 1] == A[l + 1] - A[l]) {
      r++;
    }

    long long len = r - l;
    if (len == n) {
      total = (len * (len+1))/2;
      break;
    }
    total += (len * (len+1))/2 - 3;
    l = r;
  }
  
  cout << total;
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

// https://atcoder.jp/contests/abc369/tasks/abc369_c
