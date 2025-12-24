#include <bits/stdc++.h>

using namespace std;

int main() {
  int casos; cin >> casos;
  while (casos--) {
    int n, ms; cin >> n >> ms;
    queue<pair<string, int>> q;
    while (n--) {
      string name; cin >> name;
      int score; cin >> score;
      q.push({name, score});
    }

    int total = 0;
    while (!q.empty()) {
      auto [name, score] = q.front();
      q.pop();

      if (score <= ms) {
        total += score;
        cout << name << ' ' << total << '\n';
      } else {
        q.push({name, score-ms});
        total += ms;
      }
    }
  }

  return 0;
}