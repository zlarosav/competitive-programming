#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  map<string, map<char, int>> scores;
  for (int i = 0; i < n; i++) {
    string name; char problem; int points;
    cin >> name >> problem >> points;

    scores[name][problem] = max(scores[name][problem], points);
  }

  vector<pair<int, string>> participants;
  for (auto& participante : scores) {
    int total_points = 0;
    for (auto& score : participante.second) {
      total_points += score.second;
    }
    participants.emplace_back(total_points, participante.first);
    /* 
      push_back: agrega valor
      emplace_back: agrega por referencia (usualmente es más rápido)
    */
  }
  
  sort(participants.begin(), participants.end(), [&](auto& a, auto& b) {
    if (a.first != b.first) {
      return a.first > b.first;
    }
    return a.second < b.second;
  });

  for (int i = 0; i < 4 && i < participants.size(); i++) {
    cout << participants[i].second << endl;
  }
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