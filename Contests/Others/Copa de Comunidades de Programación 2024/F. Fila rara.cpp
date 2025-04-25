#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  unordered_map<string, string> delanteDe;
  unordered_set<string> todos;
  unordered_set<string> noPrimero;

  for (int i = 0; i < n - 1; i++) {
    string A, B; cin >> A >> B;
    delanteDe[B] = A;
    todos.insert(A); todos.insert(B);
    noPrimero.insert(A);
  }

  string primero;
  for (auto& person : todos) {
    if (noPrimero.find(person) == noPrimero.end()) {
      primero = person;
      break;
    }
  }

  vector<string> fila;
  fila.push_back(primero);
  while (delanteDe.find(primero) != delanteDe.end()) {
    primero = delanteDe[primero];
    fila.push_back(primero);
  }

  for (auto& person : fila) cout << person << endl;
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