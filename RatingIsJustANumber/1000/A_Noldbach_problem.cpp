#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

#define pb push_back
#define sz(a) ((int)(a).size())
#define ff first
#define ss second
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).rbegin(), (a).rend()
#define approx(a) fixed << setprecision(a)

using ll = long long;
const double PI = 3.141592653589793;
const ll MX = 1e9 + 1;

// Criba de Eratostenes: Hasta N = 10^6
// Con bitset<N> Hasta N = 10^8 en 1s
void sieve(vector<bool>& is_prime) {
  int N = (int) is_prime.size();
  if (!is_prime[0]) is_prime.assign(N+1, true);
  is_prime[0] = is_prime[1] = false;
  for (int p = 2; p * p <= N; p++) {
    if (is_prime[p]) {
      for (int i = p * p; i <= N; i += p) {
        is_prime[i] = false;
      }
    }
  }
}

void solve() {
  int n, k; cin >> n >> k;
  if (k == 0) {
    cout << "YES";
    return;
  }
  vector<bool> is_prime(n+1);
  vector<int> primos;
  sieve(is_prime);
  for (int i = 2; i <= n; i++) {
    if (is_prime[i]) primos.pb(i);
  }
  int cnt = 0;

  for (int i = 1; i < sz(primos); i++) {
    int curr = primos[i-1] + primos[i] + 1;
    if (curr <= n && is_prime[curr]) cnt++;
    if (cnt >= k) {
      cout << "YES";
      return;
    }
  }
  cout << "NO";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
} 

// https://codeforces.com/contest/17/problem/A