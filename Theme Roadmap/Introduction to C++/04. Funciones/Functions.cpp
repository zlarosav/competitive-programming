#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int max = 0;
  for (int i = 0; i < 4; i++) {
    int current; cin >> current;
    if (current > max) max = current;
  }
  cout << max << endl;
    
  return 0;
}

// https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true


/*
OTRA FORMA DE RESOLVERLO:
#include <iostream>

using namespace std;

int max_of_four(int nums[4]) {
  int max = 0;
  for (int i = 0; i < 4; i++) {
    if (max < nums[i]) max = nums[i];
  }

  return max;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int nums[4];
  for (auto& i : nums) cin >> i;
  int ans = max_of_four(nums);
  cout << ans << endl;
    
  return 0;
}
*/