#include <bits/stdc++.h>

using namespace std;

using u64 = uint64_t;
using u128 = __uint128_t;
using ll = long long;

// Suma modular para evitar desbordamientos
u64 add(u64 a, u64 b, u64 mod) {
  return (u128)(a + b) % mod;
}

// Multiplicación modular segura usando aritmética de enteros grandes
u64 mul(u64 a, u64 b, u64 mod) {
  return (u128)a * b % mod;
}

// Exponenciación modular rápida: calcula (a^e) % mod en tiempo log(e)
u64 fastPow(u64 a, u64 e, u64 mod) {
  u64 r = 1;
  a %= mod;
  while (e) {
    if (e & 1) r = mul(r, a, mod);
    a = mul(a, a, mod);
    e >>= 1;
  }
  return r;
}

// Verifica si "a" es un testigo de que "n" no es primo
bool check(u64 n, u64 a, u64 d, int s) {
  u64 x = fastPow(a, d, n);
  if (x == 1 || x == n - 1) return false;
  for (int r = 1; r < s; r++) {
    x = mul(x, x, n);
    if (x == n - 1) return false;
  }
  return true;
}

// Implementación del test de Miller-Rabin para verificar primalidad
bool miller_rabin(u64 n) {
  if (n < 2) return false;
  int r = 0;
  u64 d = n - 1;
  
  // Descomposición de "n - 1" en d * 2^r
  while (d % 2 == 0) {
    d >>= 1;
    r++;
  }
  
  // Lista de bases para el test, optimizada para números hasta 2^64
  for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
    if (n == a) return true;
    if (check(n, a, d, r)) return false;
  }
  return true;
}

int main() {
  ll n; cin >> n;
  cout << (miller_rabin(n) ? "YES" : "NO") << endl;
  
  return 0;
}