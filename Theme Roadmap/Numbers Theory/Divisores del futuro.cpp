#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long N; cin >> N;

  vector<long long> divisores;
  for (long long div = 1; div * div <= N; div++) {
    if (N % div == 0) {
      divisores.push_back(div);
      if (N / div != div) {
        divisores.push_back(N / div);
      }
    }
  }

  sort(divisores.begin(), divisores.end());

  cout << divisores.size() << endl;
  for (int i = 0; i < divisores.size(); i++) {
    cout << divisores[i] << " ";
  }
  cout << endl;
}

int main() {
  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}