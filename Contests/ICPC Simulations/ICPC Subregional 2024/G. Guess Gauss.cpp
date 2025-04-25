#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long d; cin >> d;
  vector<pair<long long, long long>> ans;
  long long k = 1; // k = m - n
  while (k*k <= 2*d) {
    long long div = ((d - (k*(k+1))/2));
    if (div % k == 0) {
      long long n = div/k;
      long long m = k + n;
      if (n > 0 && m > 0) ans.push_back({n, m});
    }
    k++;
  } 

  cout << ans.size() << '\n';
  for (auto x : ans) {
    //cout << x.second*(x.second+1)/2 - x.first*(x.first+1)/2 << " ";
    cout << x.first << ' ' << x.second << '\n';
  }
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

// http://codeforces.com/gym/104854/problem/G