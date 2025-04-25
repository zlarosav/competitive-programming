#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  vector<int> list;
  stringstream ss(str + ',');

  int a; char ch;
  //         int  char
  //          ↓    ↓
  while(ss >> a >> ch) { // Condición: (Encuentra un char) -> Ejecuta el código
    list.push_back(a);
  }

  return list;
}

int main() {
  string str; cin >> str;
  
  vector<int> integers = parseInts(str);
  for(int i = 0; i < integers.size(); i++) {
    cout << integers[i] << "\n";
  }
  
  return 0;
}