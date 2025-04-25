#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (a > b) swap(a, b);
  if (a == 0) return b;
  return gcd(b % a, a);
}

// Creamos la función nosotros mismos
int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

int main() {
  cout << lcm(4, 6);

  return 0;
}