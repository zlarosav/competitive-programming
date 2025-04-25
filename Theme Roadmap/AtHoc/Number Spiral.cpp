#include <bits/stdc++.h>

using namespace std;

int main() {
  int numCasos; 
  cin >> numCasos;

  while (numCasos--) {
    long long y, x; cin >> x >> y;
    long long mx = max(x, y), mn = min(x, y);
    long long central = mx * mx - mx + 1;
  
    if (mx % 2 == 1) {
      if (x > y) central -= (mx - mn);
      else central += (mx - mn);
      
    } else {
      if (x < y) central -= (mx - mn);
      else central += (mx - mn);
    }
    cout << central << endl;
  }

  return 0;
}