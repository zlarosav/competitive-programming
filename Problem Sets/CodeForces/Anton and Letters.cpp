#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string conj; getline(cin, conj);
  conj = conj.substr(1, conj.size() - 2);
  set<char> letters;
  stringstream ss(conj);
  string letter;
  while (ss >> letter) {
    letters.insert(letter[0]);
  }
  cout << letters.size();

  return 0;
}

// https://codeforces.com/contest/443/problem/A