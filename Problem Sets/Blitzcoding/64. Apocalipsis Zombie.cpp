#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string cadena; getline(cin, cadena);
  stringstream ss(cadena);
  string num;
  vector<int> v;
  while (ss >> num) {
    v.push_back(stoi(num));
  }
  if (v.size() == 1) {
    cout << 0 << '\n'; return;
  }
  
  int min = *min_element(v.begin(), v.end());
  int max = *max_element(v.begin(), v.end());
  int cant = max - min + 1;
  cout << cant - v.size() << '\n';
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

// https://blitzcoding.com/problem-detail/64