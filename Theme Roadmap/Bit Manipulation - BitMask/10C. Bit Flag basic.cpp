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
        cout << flags[i] << "\n";
      } else if (tipo == 1) {
        // Set i-th flag to ON
        flags.set(i, 1);
      } else if (tipo == 2) {
        // Set i-th flag to OFF
        flags.reset(i);
      } else if (tipo == 3) {
        // Inverse i-th flag
        flags.flip(i);
      }
    } else if (tipo == 4) {
      // Print 1 if all flags are ON 1, otherwise 0
      cout << flags.all() << "\n";
    } else if (tipo == 5) {
      // Print 1 if at least one flag is ON 1, otherwise 0
      cout << flags.any() << "\n";
    } else if (tipo == 6) {
      // Print 1 if all flags are OFF 0, otherwise 0
      cout << flags.none() << "\n";
    } else if (tipo == 7) {
      // Print the number of ON 1 flags
      cout << flags.count() << "\n";
    } else if (tipo == 8) {
      // Print the decimal value of the state
      cout << flags.to_ullong() << "\n";
    }
  }

  return 0;
}