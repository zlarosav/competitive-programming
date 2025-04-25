#include <bits/stdc++.h>

using namespace std;

void solve() {
  string input;
  getline(cin, input);

  vector<pair<char, int>> lote;
  string ans = "";

  string cantidad = "";
  for (int i = 0; i < input.size(); i++) {
    if (isdigit(input[i])) cantidad += input[i];
    else { lote.push_back({ input[i], stoi(cantidad) }); cantidad = ""; }
  }

  for (auto& pkg : lote) {
    int mediumBoxes = pkg.second / 10;
    pkg.second %= 10;
    
    int bigBoxes = mediumBoxes / 5;
    mediumBoxes %= 5;
    
    for (int i = 0; i < bigBoxes; i++) ans += "[" + string(1, pkg.first) + "]";
    for (int i = 0; i < mediumBoxes; i++) ans += "{" + string(1, pkg.first) + "}";
    if (pkg.second > 0) ans += "(" + string(pkg.second, pkg.first) + ")";
  }  
  
  cout << ans << endl;
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