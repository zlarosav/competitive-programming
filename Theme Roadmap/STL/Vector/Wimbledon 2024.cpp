/*
  Wimbledon 2024
  https://omegaup.com/course/MPC/assignment/C1072024#problems
  Tema: STL (vectores)
*/


#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  vector<int> a(3), b(3);
  for (int& i : a) cin >> i;
  for (int& i : b) cin >> i;
  int cntA = 0, cntB = 0;
  for (int i = 0; i < 3; i++) {
    if (a[i] > b[i]) cntA++;
    else cntB++;
  }
  if (cntA > cntB) cout << "Krejcikova";
  else cout << "Paolini";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}