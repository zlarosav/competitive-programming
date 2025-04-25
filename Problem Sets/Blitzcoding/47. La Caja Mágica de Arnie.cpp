#include <bits/stdc++.h>

using namespace std;

int main() {
  int casos; cin >> casos;
  while (casos--) {
    int q; cin >> q;
    vector<int> v;

    while(q--) {
      int tipo; cin >> tipo;
      if (tipo == 0) {
        int x; cin >> x;
        v.push_back(x);

      } else if (tipo == 1) {
        int x; cin >> x;
        cout << v[x] << '\n';
        
      } else if (tipo == 2) {
        v.pop_back();
      }
    }
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/47