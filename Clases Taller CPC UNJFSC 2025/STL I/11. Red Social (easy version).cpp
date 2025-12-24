#include <bits/stdc++.h>

using namespace std;

int main() {
  int casos; cin >> casos;
  while (casos--) {
    int n, k; cin >> n >> k;
    deque<int> show;
    for (int i = 0; i < n; i++) {
      int curr; cin >> curr;

      auto existe = find(show.begin(), show.end(), curr);
      if (existe != show.end()) continue;

      if (show.size() >= k) show.pop_back();
      show.push_front(curr);
    }

    cout << show.size() << '\n';
    for (int& i : show) {
      cout << i << ' ';
    }
    cout << '\n';
  }

  return 0;
}