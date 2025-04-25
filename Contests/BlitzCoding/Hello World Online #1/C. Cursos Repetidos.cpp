#include <bits/stdc++.h>

using namespace std;

void solve() {
  map<int, int> numbers;
  string input; getline(cin, input);
  
  stringstream ss(input); int num;
  while (ss >> num) {
    if (numbers[num] > 0) {
      cout << num << endl;
      return;
    } else {
      numbers[num] += 1;
    }
  }
  cout << -1 << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while(t--) {
    solve();
  }

  return 0;
}