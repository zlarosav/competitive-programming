#include <bits/stdc++.h>

using namespace std;

/* fibonacci 
0,1,1,2,3,5,8,13,21,34,55,...
^
0 1 2 3 4 5 6 7  8  9  10 

  f(0) = 0
  f(1) = 1
  f(n) = f(n−1) + f(n−2)
*/

vector<int> setFibonacci(int n) {
  vector<int> fibonacci(n);
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  if (n > 1) fibonacci[2] = 1;
  for (int i = 3; i < n; i++) {
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
  }
  return fibonacci;
}

void solve() {
  int n; cin >> n;
  vector<int> secuencia = {5, 6, 6};
  if (n < 3) { // 1 < M < 50
    secuencia.resize(n);
  } else if (n > 3) {
    // 0,1,1,2,3,5,8,13,21,34,55,...
    vector<int> fibonacci = setFibonacci(n-2);
    for (int i = 3; i < n; i++) {
      int next = secuencia[i-1] + fibonacci[i-2];
      secuencia.push_back(next);
    }
  }

  /*
  Cuando i = 3
  5   6  (6)
  -   0  (1)   1 ...
  ----------
  -   -  (7) 

  Cuando i = 4
  5  6  6  (7)
  -  0  1  (1)  2 ...
  ----------------
  -  -  -  (8)  -

  Cuando i = 5
  5  6  6  7  (8)
  -  0  1  1  (2)  3  ...
  -------------------
  -  -  -  -  (10) -
  */

  cout << "[";
  for (int i = 0; i < secuencia.size(); i++) {
    cout << secuencia[i];
    if (i < secuencia.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while(t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/9