#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long long result = 0;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            result += A[j] / A[i];
        }
    }

    cout << result << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; //cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}