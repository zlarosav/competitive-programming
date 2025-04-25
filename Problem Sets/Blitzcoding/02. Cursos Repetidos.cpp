#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  cin.ignore();

  while (t--) {
    string input;
    getline(cin, input);

    stringstream numActual(input);
    int numero;
    vector<int> nums;
    while (numActual >> numero) {
      nums.push_back(numero);  
    }

    cout << "[ ";
    for (int i = 0; i < nums.size(); i++) {
      cout << nums[i] << " "; 
    }
    cout << ']' << endl;
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/2