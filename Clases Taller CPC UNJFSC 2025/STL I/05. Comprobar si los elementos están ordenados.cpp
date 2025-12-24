#include <bits/stdc++.h>

using namespace std;

int main() {
  int casos; cin >> casos;
  while (casos--) {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    bool ascendente = true;
    for (int i = 0; i < n-1; i++) {
      if (v[i] > v[i+1]) {
        ascendente = false;
        break;
      }
    }

    bool descendente = true;
    for (int i = 0; i < n-1; i++) {
      if (v[i] < v[i+1]) {
        descendente = false;
        break;
      }
    }

    if (ascendente || descendente) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  
  return 0;
}