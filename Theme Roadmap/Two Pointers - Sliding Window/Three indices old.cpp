#include <bits/stdc++.h>

using namespace std;

template <class T> void read(vector<T> &v);
template <class F, class S> void read(pair<F, S> &p);
template <class T, size_t Z> void read(array<T, Z> &a);
template <class T> void read(T &x) { cin >> x; }
template <class R, class... T> void read(R &r, T &...t) { read(r); read(t...); }
template <class T> void read(vector<T> &v) { for(auto &x : v) read(x); }
template <class F, class S> void read(pair<F, S> &p) { read(p.ff, p.ss); }
template <class T, size_t Z> void read(array<T, Z> &a) { for(auto &x : a) read(x); }

template <class F, class S> void pr(const pair<F, S> &x);
template <class T> void pr(const T &x) { cout << x; }
template <class R, class... T> void pr(const R &r, const T &...t) { pr(r); pr(t...); }
template <class F, class S> void pr(const pair<F, S> &x) { pr("{ ", x.ff, ", ", x.ss, " }\n"); }
void ps() { pr("\n"); }
template <class T> void ps(const T &x) { pr(x); ps(); }
template <class R, class... T> void ps(const R &r, const T &...t) { pr(r, ' '); ps(t...); }
template <class T> void ps(const vector<T> &v) { for(auto &x : v) pr(x, ' '); ps(); }
template <class T, size_t Z> void ps(const array<T, Z> &a) { for(auto &x : a) pr(x, ' '); ps(); }
template <class F, class S> void ps(const pair<F, S> &x) { pr(x.ff, ' ', x.ss); ps(); }

void solve() {
  int n; cin >> n;
  vector<int> v(n); read(v);

  int L = 0, R = n - 1;
  for (int i = n - 1; i >= 0; i--) {
    if (v[L] == i + 1) {
      L++;
    } else if (v[R] == i + 1) {
      R--;
    } else {
      int P;
      for (int j = 0; j < n; j++) {
        if (v[j] == i + 1) {
          P = j;
          break;
        }
      }
      cout << "YES" << endl;
      cout << L + 1 << " " << P + 1 << " " << R + 1 << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/problem/1380/A