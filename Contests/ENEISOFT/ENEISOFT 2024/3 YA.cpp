#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

const long maxa = 10000;

void solve() {
  int n; long long z; cin >> n >> z;
  vector<long long> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
    
  long long ztemp = z;
  long long mayor = LONG_LONG_MIN;
  for (int i = 0; i < n; i++) {
    long long y = x[i];
    long long xitemp = x[i] | z;
    ztemp = y & ztemp;
    if (mayor < xitemp){
      mayor = xitemp;
    }
  }

  cout << mayor << endl;
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