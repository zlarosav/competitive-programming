#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
  cin.tie(0);

  bitset<64> flags;
	int t = 1;
	cin >> t;
	while(t--) {
    int tipo, i; cin >> tipo;
    if (0 <= tipo && tipo <= 3) {
      cin >> i;
      if (tipo == 0) {
        // Print 1 if i-th flag is ON, otherwise 0
        cout << ((flags >> i) & 1) << "\n";
      } else if (tipo == 1) {
        // Set i-th flag to ON
        flags |= (1ULL << i);
      } else if (tipo == 2) {
        // Set i-th flag to OFF
        flags &= ~(1ULL << i);
      } else if (tipo == 3) {
        // Inverse i-th flag
        flags ^= (1ULL << i);
      }
    } else if (tipo == 4) {
      // Print 1 if all flags are ON 1, otherwise 0
      cout << (flags == UINT64_MAX) << "\n";
    } else if (tipo == 5) {
      // Print 1 if at least one flag is ON 1, otherwise 0
      cout << (flags != 0) << "\n";
    } else if (tipo == 6) {
      // Print 1 if all flags are OFF 0, otherwise 0
      cout << (flags == 0) << "\n";
    } else if (tipo == 7) {
      // Print the number of ON 1 flags
      cout << __builtin_popcountll(flags) << "\n";
    } else if (tipo == 8) {
      // Print the decimal value of the state
      cout << flags << "\n";
    }
  }

  return 0;
}