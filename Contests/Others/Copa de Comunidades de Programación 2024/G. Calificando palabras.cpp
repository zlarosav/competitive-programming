#include <bits/stdc++.h>

using namespace std;

int scoreof (string person) {
  int score = 0;
  for (char ch : person) {
    if (isdigit(ch)) {
      score += ch - '0';
    } else if (islower(ch)) {
      score += 10 + (ch - 'a');
    } else if (isupper(ch)) {
      score += 20 + 2*(ch - 'A');
    }
  }
  return score;
}

void solve() {
  string ana, carolina; cin >> ana >> carolina;
  int anaScore = scoreof(ana), caroScore = scoreof(carolina);
  if (anaScore > caroScore) {
    cout << "Ana " << anaScore << endl;
  } else if (anaScore < caroScore) {
    cout << "Carolina " << caroScore << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}