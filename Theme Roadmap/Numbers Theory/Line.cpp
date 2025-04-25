/*
  Problema de Identidad de Bezout (Number Theory - GCD - Bezout)
  https://codeforces.com/problemset/problem/7/C
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll gcd_bezout(ll a, ll b, ll &x, ll &y) {
  if (a == 0) {
    x = 0;
    y = 1;
    return b;
  }
  ll x1, y1;
  ll d = gcd_bezout(b % a, a, x1, y1);
  x = y1 - (b / a) * x1;
  y = x1;
  return d;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  ll A, B, C; cin >> A >> B >> C;
  ll x0, y0;
  ll d = gcd_bezout(A, B, x0, y0);
  
  if((-C) % d != 0) {
    cout << -1 << "\n";
    return 0;
  }
  
  ll factor = (-C) / d;
  x0 *= factor;
  y0 *= factor;
  
  cout << x0 << " " << y0 << "\n";

  return 0;
}