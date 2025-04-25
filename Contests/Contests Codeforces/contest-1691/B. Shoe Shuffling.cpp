#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<int> numbers(n);
  for (int& x : numbers) cin >> x;
  
  if (n == 1) { cout << "-1\n"; return; }

  map<int, pair<int, int>> shoes;
  for (int i = 0; i < n; i++) {
    int curr = i;
    while (curr < n && numbers[i] == numbers[curr]) {
      curr++;
    }
    curr--;
    if (curr == i) { 
      cout << "-1\n"; 
      return; 
    } else {
      shoes[numbers[i]] = {i, curr}; 
      i = curr;
    }
  }

  for (auto& m : shoes) {
    for (int i = m.second.first+1; i <= m.second.second; i++) {
      cout << i+1 << ' ';
    }
    cout << m.second.first+1 << ' ';
  }
  cout << endl;
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
