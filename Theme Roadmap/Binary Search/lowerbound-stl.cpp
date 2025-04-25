#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v(n);
  for (auto& e : v) {
    cin >> e;
  }
  int q; cin >> q;
  for (int i = 0; i < q; i++) {
    int query; cin >> query;
    auto lower = lower_bound(v.begin(), v.end(), query);
    if (query == *lower) {
      cout << "Yes" << " " << (lower-v.begin()+1) << endl;
    } else {
      auto newLower = lower_bound(v.begin(), v.end(), *lower);
      cout << "No" << " " << (newLower-v.begin()+1) << endl;
    }
  }

  return 0;
}
