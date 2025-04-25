#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; cin >> t;
  while (t--) {
    string word, rword; cin >> word; rword = word;
    reverse(rword.begin(), rword.end());
    if (rword == word) cout << "P" << endl;
    else cout << "NP" << endl;
  }

  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/#problems/Par-o-Impar