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

void solve() {
  int n; cin >> n;
  if (n == 1) {
    cout << "1 0\n";
    return;
  }
  if (n % 2 == 0) {
    cout << (n/2) << ' ' << (n/2) << '\n';
    return;
  }
  string num = to_string(n);
  string ans1 = "", ans2 = "";
  int idx = sz(num)-1;
  while (num[idx] == '9') idx--;
  if (idx >= 0) {
    string s = num.substr(0, idx+1);
    int left = stoi(s);
    int a = left/2, b = left-a;
    ans1 += to_string(a);
    ans2 += to_string(b);
  }
  for (int i = 0; i < sz(num)-idx-1; i++) {
    ans1 += (i % 2 == 0 ? '5' : '4');
    ans2 += (i % 2 == 0 ? '4' : '5');
  }
  cout << stoi(ans1) << ' ' << stoi(ans2) << '\n';
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

// https://codeforces.com/contest/1788/problem/B