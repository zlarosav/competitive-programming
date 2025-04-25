#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<int> numbers(n);
  for (int& x : numbers) cin >> x;

  if (n == 1) { cout << "-1\n"; return; }

  vector<int> ans;
  for (int i = 0; i < n; i++) {
    int curr = i;
    while (curr < n && numbers[i] == numbers[curr]) curr++;
    curr--;
    if (curr == i) { 
      cout << "-1\n"; 
      return; 
    } else {
      for (int j = i+1; j <= curr; j++) {
        ans.push_back(j+1);
      }
      ans.push_back(i+1);
      i = curr;
    }
  }
  for (int& i : ans) cout << i << ' ';
  cout << "\n";
}
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while(t--){
    solve();
  }
}

// https://codeforces.com/contest/1691/problem/B