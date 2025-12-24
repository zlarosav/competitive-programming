#include <bits/stdc++.h>

using namespace std;

int main() {
  int casos; cin >> casos;
  while (casos--) {
    int n; cin >> n;
    int numeros[n];
    for (int i = 0; i < n; i++) {
      cin >> numeros[i];
    }

    int ans = INT_MIN; 
    for (int i = 0; i < n; i++) {
      ans = max(ans, numeros[i]);
    }

    cout << ans << '\n';
  }

  return 0;
}