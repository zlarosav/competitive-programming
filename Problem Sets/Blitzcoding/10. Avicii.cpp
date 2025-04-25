#include <bits/stdc++.h>

using namespace std;

void solve() {
  string song; getline(cin, song);
  unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  int counter = 0;
  for (char letter : song) {
    if (vowels.count(letter)) {
      counter++;
    }
  }
  cout << counter << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/10