/*
  Problema de Máximo Común Divisor (Number Theory - GCD)
  
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
  if (a > b) swap(a, b);
  if (a == 0) return b;
  return gcd(b % a, a);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  ll A, B; cin >> A >> B;
  cout << gcd(A, B);

  return 0;
}