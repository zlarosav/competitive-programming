#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  map<string, int> counter;
  string a[n], b[n], c[n];

  auto read = [&](string arr[]) {
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      counter[arr[i]]++;
    }
  };
  read(a); read(b); read(c);
  
  auto sumar = [&](string arr[]) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
      if (counter[arr[i]] == 2) suma++;
      else if (counter[arr[i]] == 1) suma += 3;
    }
    return suma;
  };
  cout << sumar(a) << ' ' << sumar(b) << ' ' << sumar(c) << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/problem/1722/C