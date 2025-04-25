#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N, M, R, C; cin >> N >> M >> R >> C;
  pair<int, int> p1 = {0, 0}, p2 = {0, N}, p3 = {M, 0}, p4 = {M, N};
  pair<int, int> tunel = {R, C};
  vector<pair<int, int>> distances(4);
  distances[0] = {p1.first-tunel.first, p1.second-tunel.second};
  distances[1] = {p2.first-tunel.first, p2.second-tunel.second};
  distances[2] = {p3.first-tunel.first, p3.second-tunel.second};
  distances[3] = {p4.first-tunel.first, p4.second-tunel.second};
  

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