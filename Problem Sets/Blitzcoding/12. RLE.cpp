#include <bits/stdc++.h>

using namespace std;

void solve() {
  string events; cin >> events;
  if (events.size() == 1) {
    cout << 1 << endl; return;
  }
  
  int count = 1;
  for (int i = 1; i <= events.size(); i++) {
    if (i != 0 && events[i] == events[i-1]) {
      count++;
    } else {
      cout << count << events[i-1];
      count = 1;
    }
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/12