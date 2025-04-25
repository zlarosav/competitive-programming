#include <bits/stdc++.h>
#include <string>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

ll getNumber(ll n, ll x, ll y) {
  if (n == 1) {
    if (x == 1 && y == 1) return 1;
    if (x == 2 && y == 2) return 2;
    if (x == 2 && y == 1) return 3;
    if (x == 1 && y == 2) return 4;
  }
  ll mitad = 1LL << (n - 1);
  ll size = 1LL << (2 * n - 2);
  ll cuadrante = 0; // 0 1 2 3
  int coordX = x, coordY = y;
  if(x <= mitad && y <= mitad) {
    cuadrante = 0;
  } else if(x > mitad && y > mitad) {
    cuadrante = 1;
    coordX = x - mitad;
    coordY = y - mitad;
  } else if(x > mitad && y <= mitad) {
    cuadrante = 2;
    coordX = x - mitad;
  } else if(x <= mitad && y > mitad) {
    cuadrante = 3;
    coordY = y - mitad;
  }

  return cuadrante * size + getNumber(n - 1, coordX, coordY);
}

pair<ll,ll> getCoordinates(ll n, ll d) {
  if (n == 1) {
    if (d == 1) return {1, 1};
    if (d == 2) return {2, 2};
    if (d == 3) return {2, 1};
    if (d == 4) return {1, 2};
  }

  ll mitad = 1LL << (n - 1);
  ll size = 1LL << (2*n - 2);
  ll cuadrante = (d - 1) / size;
  ll res = ((d - 1) % size) +1;
  //dbg(cuadrante, d, size, res);
  pair<ll, ll> pos = getCoordinates(n - 1, res);
  if (cuadrante == 0) {
    /*pos.first += 0;
    pos.second += 0;*/
  } else if (cuadrante == 1) {
    pos.first += mitad;
    pos.second += mitad;
  } else if (cuadrante == 2) {
    pos.first += mitad;
  } else if (cuadrante == 3) {
    pos.second += mitad;
  }

  return pos;
}

void solve() {
  ll n, q; cin >> n >> q;
  while (q--) {
    string type; cin >> type;
    if (type == "->") {
      ll x, y; cin >> x >> y;
      cout << getNumber(n, x, y) << "\n";
    } else if (type == "<-") {
      ll d; cin >> d;
      pair<ll,ll> ans = getCoordinates(n, d);
      cout << ans.first << " " << ans.second << "\n";
    }
  }
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