#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n];
    for (int& i : a) cin >> i;
    for (int& i : a) {
      int x; cin >> x;
      if (x >= i) {
        cout << 0 << '\n';
        return 0;
      }
    }
    cout << 1 << '\n';
  }
  

  return 0;
}

// https://blitzcoding.com/problem-detail/32