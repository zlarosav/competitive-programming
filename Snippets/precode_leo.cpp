#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#ifdef LOCAL
#include "debug.cpp"
#else
#define debug(...)
#endif

using namespace std;
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define pb push_back
#define sz(a) ((int)((a).size()))
#define ff first
#define ss second
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).rbegin(), (a).rend()
#define approx(a) fixed << setprecision(a)

template <class T> using pq = priority_queue<T>;
template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
template <class T> void ckmin(T &a, const T &b) { a = min(a, b); }
template <class T> void ckmax(T &a, const T &b) { a = max(a, b); }

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