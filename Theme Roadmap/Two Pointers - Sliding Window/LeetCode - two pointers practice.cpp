#include <iostream>
#include <cmath>

using namespace std;

void solve() {
  string s, t; cin >> s >> t;
  int maxCost; cin >> maxCost;

  int left = 0, right, maxLength = 0;

  int currentCost = abs(s[0] - t[0]);
  while (currentCost > maxCost) {
    left++;
    currentCost = abs(s[left] - t[left]);
  }
  //cout << "left: " << left << " cc: " << currentCost;

  right = left;
  while (currentCost + abs(s[right+1] - t[right+1]) <= maxCost) {
    right++;
    currentCost += abs(s[right+1] - t[right+1]);
  }

  //cout << " right: " << right << " " << right - left + 1 << endl;
  cout << right - left + 1 << endl;

  /* for (int right = 0; right < s.size(); right++) {
    currentCost += abs(s[right] - t[right]);

    while (currentCost > maxCost) {
      currentCost -= abs(s[left] - t[left]);
      left++;
    }

    if (maxLength < right - left + 1) {
      maxLength = right - left + 1;
    }
  } 
  cout << maxLength << endl;*/
}

int main() {
  int t; cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}