#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c; cin >> a >> b >> c;
  
  int largo = a/c;
  if (a % c != 0) { 
    largo += 1;
  } 

  int alto = b/c;
  if (b % c != 0) {
    alto += 1;
  }
  
  long long total = largo * alto;
  cout << total << endl;
}


int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}