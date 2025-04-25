#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string lex; cin >> lex;
  int n; cin >> n;
  vector<string> v(n);
  for (string& x : v) cin >> x;
  
  map<char, int> level;
  for (int j=0, i=lex.size(); i>=1; i--, j++) level[lex[j]] = i;
  
  sort(v.begin(), v.end(), [&](string& a, string& b) {
    bool mayor; int len;
    if (a.size() < b.size()) {
      len = a.size();
      mayor = true;
    } else {
      len = b.size();
      mayor = false;
    }
    
    for (int i=0; i<len; ) {
      if (level[a[i]] == level[b[i]]) {
        if (i == len-1) {
          return mayor;
        }
        i++;
      } else if (level[a[i]] < level[b[i]]) { 
        return false;
      } else { 
        return true;
      }
    }
  });

  for (string& x : v) cout << x << '\n';
  cout << '\n';
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