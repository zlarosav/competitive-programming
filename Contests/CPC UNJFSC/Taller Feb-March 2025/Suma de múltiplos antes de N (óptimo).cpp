/*
  TEMA: Teoría de números
  GCD - LCM
  NIVEL: Difícil
*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (a > b) swap(a, b);
  if (a == 0) return b;
  return gcd(b % a, a);
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

long long sumaMultiplos(long long multiplo, long long N) {
  long long k = (N - 1) / multiplo;
  long long suma = multiplo * (k * (k + 1) / 2);
  return suma;
}

int main() {
  int numCasos; 
  cin >> numCasos;

  while (numCasos--) {
    long long N, A, B; cin >> N >> A >> B;
    long long suma = sumaMultiplos(A, N) + sumaMultiplos(B, N) - sumaMultiplos(lcm(A, B), N);

    cout << suma << endl;
  }

  return 0;
}