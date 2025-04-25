#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    if (n <= 10 || n > 21) cout << 0 << endl;
    else if (n == 20) cout << 15 << endl;
    else cout << 4 << endl;
  }
  
  return 0;
}

// https://blitzcoding.com/problem-detail/20