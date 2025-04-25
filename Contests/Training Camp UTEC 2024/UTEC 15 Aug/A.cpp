#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n, count1, count2, count1p2 = 0, denied = 0; cin >> n >> count1 >> count2;
  for (long long i=0; i<n; i++) {
    long long group; cin >> group;
    //dbg(group, count1, count2, denied);
    if (group == 1 && count1 > 0) {
      count1--;
    } else if (group == 1 && count1 == 0 && count2 > 0) {
      count2--;
      count1p2++;
    } else if (group==1 && count1p2 > 0) {
      count1p2--;
    } else if (group==1 && count1==0) {
      denied++;
    }
    
    if (group == 2 && count2 > 0) {
      count2--;
    } else if (group==2 && count2==0) {
      denied+=2;
    }
    
  } 
  cout << denied;
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