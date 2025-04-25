#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, h, w; cin >> n >> h >> w;
  while (n--) {
    char a, b; cin >> a >> b;
    if (a == 'Y') {
      cout << "Y ";
      w++;
      h--;
    } else if (a == 'N') {
      if (w == 0) {
        cout << "Y ";
        w++;
        h--;
      } else {
        cout << "N "; 
      }
    }

    if (b == 'Y') {
      cout << "Y ";
      h++;
      w--;
    } else if (b == 'N') {
      if (h == 0) {
        cout << "Y ";
        h++;
        w--;
      } else {
        cout << "N "; 
      }
    }
    cout << '\n';
  }
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

// http://codeforces.com/gym/104252/problem/D