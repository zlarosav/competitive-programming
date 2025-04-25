/*
  https://omegaup.com/course/MPC/assignment/C1072024#problems/Medallero-olimpico
  Tema: STL (Map)
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  map<string, vector<int>> mp;
  int n; cin >> n;
  while (n--) {
    string pais, medalla; cin >> pais >> medalla;
    if (mp[pais].empty()) mp[pais].resize(3);
    if (medalla == "oro") mp[pais][0]++;
    else if (medalla == "plata") mp[pais][1]++;
    else if (medalla == "bronce") mp[pais][2]++;
  }
  for (auto [pais, medallas] : mp) {
    cout << pais << ' ';

    for (int m : medallas) {
      cout << m << ' ';
    }
    cout << '\n';
  }
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