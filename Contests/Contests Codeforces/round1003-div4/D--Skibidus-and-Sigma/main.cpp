#include <bits/stdc++.h>
#include <vector>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, m; cin >> n >> m;
  vector<vector<long long>> arrs(n, vector<long long>(m));
  for (auto& arr : arrs) {
      for (long long& x : arr) {
        cin >> x;        
      }
  }
  sort(arrs.begin(), arrs.end(), [&](auto& a, auto& b){
      long long sumA = 0, sumB = 0;
      for (long long& x : a) sumA += x;
      for (long long& x : b) sumB += x;
      return sumA > sumB;
  });

  long long ans = 0;
  vector<long long> arrCompleted;
  for (auto& arr : arrs) {
      for (long long& i : arr) {
          arrCompleted.push_back(i);
      }
  }
  vector<long long> pre(n*m);
  pre[0] = arrCompleted[0];
  for (int i = 1; i < n*m; i++) {
      pre[i] = arrCompleted[i] + pre[i-1];
  }
  for (long long& i : pre) {
      ans += i;
  }
  cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1; 
	cin >> t;
	//cin.ignore();
	while (t--) {
		solve();
	}

	return 0;
}
