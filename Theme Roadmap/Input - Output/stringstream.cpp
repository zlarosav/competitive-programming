#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  vector<int> list;
  string number = "";
  str.push_back(',');
  for (char ch : str) {
    if (ch == ',') {
      int element = stoi(number);
      list.push_back(element);
      number = "";
      continue;
    }
    number.push_back(ch);
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