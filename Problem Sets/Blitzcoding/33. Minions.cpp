#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    string num; cin >> num;
    int suma = 0;
    for (char ch : num) suma += ch - '0';
    cout << suma << '\n';
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/33