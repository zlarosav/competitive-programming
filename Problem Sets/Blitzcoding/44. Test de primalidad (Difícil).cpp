#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

// Función para realizar la multiplicación modular
long long mulmod(long long a, long long b, long long mod) {
  long long result = 0;
  a = a % mod;
  while (b > 0) {
    if (b % 2 == 1) {
      result = (result + a) % mod;
    }
    a = (a * 2) % mod;
    b /= 2;
  }
  return result % mod;
}

// Función para realizar la exponenciación modular
long long power(long long a, long long b, long long mod) {
  long long result = 1;
  a = a % mod;
  while (b > 0) {
    if (b % 2 == 1) {
      result = mulmod(result, a, mod);
    }
    a = mulmod(a, a, mod);
    b /= 2;
  }
  return result % mod;
}

// Prueba de Miller-Rabin para chequear si un número es primo
bool isPrime(long long n, int k=5) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0) return false;

  long long d = n - 1;
  while (d % 2 == 0) {
    d /= 2;
  }

  for (int i = 0; i < k; i++) {
    long long a = 2 + rand() % (n - 3);
    long long x = power(a, d, n);
    if (x == 1 || x == n - 1) continue;

    while (d != n - 1) {
      x = mulmod(x, x, n);
      d *= 2;

      if (x == 1) return false;
      if (x == n - 1) break;
    }

    if (x != n - 1) return false;
  }

  return true;
}

void solve() {
  long long n; cin >> n;
  cout << (isPrime(n) ? "YES" : "NO") << '\n';
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

// https://cp-algorithms.com/algebra/primality_tests.html
// https://www.youtube.com/watch?v=zmhUlVck3J0
// https://www.youtube.com/watch?v=-BWTS_1Nxao

// https://blitzcoding.com/problem-detail/44