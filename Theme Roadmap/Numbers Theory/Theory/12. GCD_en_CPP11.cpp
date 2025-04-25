#include <bits/stdc++.h>

using namespace std;

// Creamos la función nosotros mismos
int gcd(int a, int b) {
  if (a > b) swap(a, b);
  if (a == 0) return b;
  return gcd(b % a, a);
}

int main() {
  cout << gcd(30, 48);

  return 0;
}