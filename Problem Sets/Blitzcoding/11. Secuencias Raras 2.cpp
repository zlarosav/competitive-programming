#include <bits/stdc++.h>

using namespace std;

void solve() {
  string serie, target; getline(cin, serie);
  stringstream ss(serie.substr(1, serie.size()-2));
  vector<int> nums;
  while (getline(ss, target, ',')) {
    nums.push_back(stoi(target));
  }
  sort(nums.begin(), nums.end());
  cout << "[";
  for (int i = 0; i < nums.size(); i++) {
    cout << 10+nums[i] << ((i == nums.size()-1) ? "]" : ", "); 
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/11