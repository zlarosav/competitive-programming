#include <bits/stdc++.h>

using namespace std;

void printKMax(int arr[], int n, int k){
	int left = 0, right = k-1, maxValue = 0;
  while (right < n) {
    if (maxValue < arr[left]) {
      maxValue = arr[left];
    }
    if (left == right) {
      cout << maxValue << " ";
      right++;
      left -= k - 1;
      maxValue = 0;
    }
    left++;
  }
  cout << endl;
}

void solve() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(auto& e : arr) cin >> e;
  
  printKMax(arr, n, k);
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
	while(t--) {
    solve();
  }
  
  return 0;
}

// https://www.hackerrank.com/contests/code-cpp-september-2015/challenges/deque-stl/problem