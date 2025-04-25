#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()

void solve() {
  long long N, P, Q; cin >> N >> P >> Q;
  vector<long long> posis, negas;
  for (long long i=0; i<N; i++){
    long long e; cin >> e;
    if (e >= 0) posis.push_back(e);
    else negas.push_back(e);
  }
  sort(allr(posis)); sort(all(negas));
  //dbg(posis, negas);
  long long A = 0, B = 0;
  for (long long i=0; i < min(P, (long long)posis.size()); i++) {
    A += posis[i];
  }
  for (long long i=0; i < min(Q, (long long)negas.size()); i++) {
    B += negas[i];
  }
  cout << A - B << '\n';
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

// https://codeforces.com/gym/104426/problem/A