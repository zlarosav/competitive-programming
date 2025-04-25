/*
  Problema de Factorización Prima con Criba de Eratóstenes (Number Theory - Factorización - Criba de Eratóstenes)
  https://codeforces.com/group/1yEJWoOmIY/contest/503019/problem/F <- Problema privado por el momento
*/

#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

const int MAXN = 1e7 + 1;
vector<int> spf(MAXN); 

// Criba de Eratóstenes
void sieve() {
  for (int i = 2; i < MAXN; i++) spf[i] = i;

  for (int i = 2; i * i < MAXN; i++) {
    if (spf[i] == i) { 
      for (int j = i * i; j < MAXN; j += i) {
        if (spf[j] == j) spf[j] = i; 
      }
    }
  }
}

void factorize(int N) {
  while (N != 1) {
    cout << spf[N] << " ";
    N /= spf[N]; 
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  sieve();
  
  int t; cin >> t;
  while (t--) {
    int N; cin >> N;
    factorize(N); 
  }
  
  return 0;
}
