#include <bits/stdc++.h>

using namespace std;

bool canPlaceStores(const vector<int>& positions, int m, int minDist) {
  int count = 1;
  int lastPosition = positions[0];

  for (int i = 1; i < positions.size(); i++) {
    if (positions[i] - lastPosition >= minDist) {
      count++;
      lastPosition = positions[i];
      if (count >= m) {
        return true;
      }
    }
  }
  return count >= m;
}

void solve() {
  int n, m; cin >> n;
  vector<int> positions(n);
  for (int i = 0; i < n; i++) {
    cin >> positions[i];
  }
  cin >> m;

  sort(positions.begin(), positions.end());

  int left = 0, right = positions[n - 1] - positions[0], bestDist = 0;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (canPlaceStores(positions, m, mid)) {
      bestDist = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  cout << bestDist << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
