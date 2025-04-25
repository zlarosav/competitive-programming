#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> dp(n+1);
  dp[1] = 0;
  
  for (int i = 2; i <= n; i++) {
    string anterior = to_string(i-1);
    char last=anterior[anterior.size()-1];
    string actual=to_string(i);
    string actualconcat=last+actual;
    int count = 0;

    for (int j = 0; j < actualconcat.size() - 1; j++) {
      if(actualconcat[j]=='4' && actualconcat[j+1]=='2') count++;
    }
    dp[i]=dp[i-1]+count;
  }
  cout<<dp[n];
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/gym/104854/problem/D