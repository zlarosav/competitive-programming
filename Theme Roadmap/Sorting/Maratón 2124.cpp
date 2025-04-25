/*
  https://omegaup.com/course/MPC/assignment/C1072024#problems/Maraton-2124
  Tema: Ordenamiento
*/

#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int N, K; cin >> N >> K;
  vector<int> diffs;
  for (int i = 0; i < N; i++) {
    int a, b; cin >> a >> b;
    diffs.push_back(a - b);
  }
  
  sort(diffs.rbegin(), diffs.rend());

  cout << diffs[K - 1] << endl;
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