#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  cin.ignore();
  while(n--) {
    string saludo; getline(cin, saludo);
    cout << saludo << endl;
  }
}

// https://blitzcoding.com/problem-detail/30